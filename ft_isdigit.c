int     ft_isdigit(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        {
            if (!(str[i] >= 48  && str[i] <= 57))
                return (0);
            i++;
        }
    return (1);
}
/*#include <stdio.h>

int     main(void)
{
    printf("%d\n", ft_isdigit("1234264664"));
    printf("%d\n", ft_isdigit("sayeeee&"));
    printf("%d\n", ft_isdigit(""));
}*/