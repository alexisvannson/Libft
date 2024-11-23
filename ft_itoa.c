/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:47:23 by avannson          #+#    #+#             */
/*   Updated: 2024/11/22 11:57:19 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
 
 
char    *ft_itoa(int n)
{   
    char    *str;
    char    *final;
    int i;
    int j;

    str = malloc(101);
    if (!str)
        return (0);
        final = malloc(101);
    if (!final)
        return (0);
    i = 0;
    j = 0;
    while (n >= 10)
    {
        str[i] = n % 10 + '0';
        n = n / 10;
        i++;
    }
    str[i++] = n;
    str[++i] = '\0';
    while (i >= 0)
    {
        final[j] = str[i];
        j++;
        i--;
    }
    return (str);
}
#include <stdio.h>
int main(void)
{
    printf("%s", ft_itoa(1234567));
    return (0);
}
