int     ft_isalpha(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        {
            if (!(str[i] >= 65  && str[i] <= 90) && !(str[i] >= 97  && str[i] <= 122))
                return (0);
            i++;
        }
    return (1);
}
/*#include <stdio.h>

int     main(void)
{
    printf("%d", ft_isalpha("sayeeee"));
    printf("%d", ft_isalpha("sayeeee&"));
}*/