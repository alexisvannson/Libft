/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:17:03 by avannson          #+#    #+#             */
/*   Updated: 2024/11/18 08:41:29 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char    *str1;
    char    *str2;
    size_t  i;

    i = 0;
    str1 = (char*) s1;
    str2 = (char*) s2;
    while (str1[i] && i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);
    
}
#include <string.h>
#include <stdio.h>

int main(void)
{
    printf("vraie fct %i\n",memcmp("","sayee",3));
    printf("la mienne %i\n",ft_memcmp("","sayee",3));
    printf("vraie fct %i\n",memcmp("a","b",3));
    printf("la mienne %i\n",ft_memcmp("a","b",3)); 
    /*printf("vraie fct %i\n",memcmp("ae","sayee",3));
    printf("la mienne %i\n",ft_memcmp("ae","sayee",3));*/
    return (0);
}
