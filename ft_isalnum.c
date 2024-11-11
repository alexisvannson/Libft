int     ft_isalphanum(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        {
            if (!(str[i] >= 65  && str[i] <= 90) && !(str[i] >= 97  && str[i] <= 122) && !(str[i] >= 48  && str[i] <= 57))
                return (0);
            i++;
        }
    return (1);
}
/*
#include <stdio.h>
    
int     main(void)
{
    printf("%d\n", ft_isalphanum("sayeeee"));
    printf("%d\n", ft_isalphanum("sayeeee123"));
    printf("%d\n", ft_isalphanum("sayeeee12 3"));
    printf("%d\n", ft_isalphanum("sayAé&eeee123"));
}*/