char *
strcpy(char *s1, const char *s2)
{
	char *src;
	char *dest;

	src = (char *)s2;
	dest = s1;
	while ((*dest++ = *src++))
		;

	return (s1);
}
