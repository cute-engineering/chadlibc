char *
strrchr(char const *s, int c)
{
    char *last = 0;

    while (*s)
    {
        if (*s == c)
        {
            last = (char *) s;
        }
        s++;
    }

    return (last);
}
