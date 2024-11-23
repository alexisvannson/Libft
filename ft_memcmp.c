/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:17:03 by avannson          #+#    #+#             */
/*   Updated: 2024/11/22 23:24:28 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libc.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char    *str1;
    char    *str2;
    size_t  i;

    i = 0;
    str1 = (char*) s1;
    str2 = (char*) s2;
    if (n == 0)
        return (0);
    if (n == 1)
        return (str1[0] - str2[0]);
    while (str1[i] && i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);
    
}