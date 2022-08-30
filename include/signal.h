#ifndef _SIGNAL_H
#define _SIGNAL_H 1

typedef int sig_atomic_t;

#define SIGABRT 0
#define SIGFPE	1
#define SIGILL	2
#define SIGINT	3
#define SIGSEGV 4
#define SIGTERM 5

#define SIG_IGN (void (*)(int))0
#define SIG_DFL (void (*)(int))1
#define SIG_ERR (void (*)(int))2

void (*signal(int sig, void (*func)(int)))(int);
int raise(int sig);

#endif /* !_SIGNAL_H */
