/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:47:23 by avannson          #+#    #+#             */
/*   Updated: 2024/11/19 21:00:15 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
 
char    *ft_itoa(int n)
{   
    char    *str;
    int i;

    str = malloc(101);
    if (!str)
        return (0);
    i = 0;
    while (n >= 10)
    {
        str[i] = n % 10 + '0';
        n = n / 10;
        i++;
    }
    str[i++] = n;
    str[++i] = '\0';
    return (str);
}


int main(void)
{ 
    printf("%s \n", ft_itoa(129843));
    return (0);
}