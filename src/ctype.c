#include <ctype.h>

int
isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
			(c >= '0' && c <= '9'));
}

int
isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int
iscntrl(int c)
{
	return (c == 0x7F || c < 0x20);
}

int
isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int
isgraph(int c)
{
	return (c >= '!' && c <= '~');
}

int
islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int
isprint(int c)
{
	return (isspace(c) || isgraph(c));
}

int
ispunct(int c)
{
	return (c > 0x20 && !isalnum(c));
}

int
isspace(int c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' ||
			c == '\v');
}

int
isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int
isxdigit(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') ||
			(c >= 'a' && c <= 'f'));
}

int
tolower(int c)
{
	return (isupper(c) ? c - 'A' + 'a' : c);
}

int
toupper(int c)
{
	return (islower(c) ? c - 'a' + 'A' : c);
}
