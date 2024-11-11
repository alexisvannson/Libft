#include <stdio.h>

// Convert a lowercase character to uppercase
char get_char(char str)
{
    if (str >= 'a' && str <= 'z')
        return (str - 32);
    return (str);
}

// Convert a string to uppercase in place
void ft_toupper(char *str)
{
    int i = 0;
    while (str[i])
    {
        str[i] = get_char(str[i]);  // Modify the string in place
        i++;
    }
}

int main(void)
{
    
    char str1[] = "sayeeee&";
    char str2[] = "SAKNDL";

    ft_toupper(str1);
    ft_toupper(str2);

    printf("%s\n", str1);  // Output: SAYEEEE&
    printf("%s\n", str2);  // Output: SAKNDL
    
    return 0;
}