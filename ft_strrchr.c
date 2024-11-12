/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippevannson <philippevannson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:48:10 by philippevan       #+#    #+#             */
/*   Updated: 2024/11/12 07:55:46 by philippevan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strrchr(char *str, int search_str)
{
    int i;
    
    i = ft_strlen(str) - 1;
    while (str[i])
    {
        if (str[i] == search_str)
            return (&str[i]); 
            i--;
    }
    return (0);
}

/*#include <stdio.h> 
int main(void)
{
    printf("%s\n", ft_strrchr("lolilolopop", 'l'));
}*/