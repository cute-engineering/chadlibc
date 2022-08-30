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
	void (*old_func)(int) = signal_handlers[sig];

	if (sig > 6 || sig < 0)
	{
		errno = EDOM;
		return SIG_ERR;
	}

	if (func == SIG_DFL)
	{
		signal_handlers[sig] = default_sig_handler;
	}
	else if (func == SIG_IGN)
	{
		signal_handlers[sig] = ignore_sig_handler;
	}
	else
	{
		signal_handlers[sig] = func;
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
