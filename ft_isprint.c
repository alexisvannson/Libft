#include <stdio.h>


int ft_isprint(char str)
{
    if (str >= 40 && str <= 176)
        return (1);
    return (0);
}
/*
int main(void)
{
    printf("%s\n", ft_isprint('a'));  
    printf("%s\n", ft_isprint('8'));  
    printf("%s\n", ft_isprint(''));  
    
    return 0;
}*/