#include <errno.h>
#include <signal.h>

static void (*signal_handlers[7])(int);

static void
default_sig_handler(int sig)
{
	/* TODO */
	(void)sig;
}

static void
ignore_sig_handler(int sig)
{
	(void)sig;
}

void (*signal(int sig, void (*func)(int)))(int)
{
	void (*old_func)(int);

	__atomic_load(&signal_handlers[sig], &old_func, __ATOMIC_SEQ_CST);

	if (sig > 6 || sig < 0)
	{
		errno = EDOM;
		return SIG_ERR;
	}

	if (func == SIG_DFL)
	{
		__atomic_store_n(&signal_handlers[sig], default_sig_handler,
						 __ATOMIC_RELEASE);
	}
	else if (func == SIG_IGN)
	{
		__atomic_store_n(&signal_handlers[sig], ignore_sig_handler,
						 __ATOMIC_RELEASE);
	}
	else
	{
		__atomic_store_n(&signal_handlers[sig], func, __ATOMIC_RELEASE);
	}

	return old_func;
}

int
raise(int sig)
{
	if (sig > 6 || sig < 0)
	{
		errno = EDOM;
		return 1;
	}

	signal_handlers[sig](sig);
	return 0;
}
