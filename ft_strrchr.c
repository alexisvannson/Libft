int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}


char *strrchr(const char *s, int c)
{
    int     last_index;

    last_index = ft_strlen(s) - 1;
    while(s[last_index] && s[last_index] != c)
        i--;
    if (last_index == 0)
        return (0);
    return (s[last_index]);
}