/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:17:03 by avannson          #+#    #+#             */
/*   Updated: 2024/11/21 19:09:40 by avannson         ###   ########.fr       */
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
    while (str1[i] && i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);
    
}
#include <stdio.h>
int main(int arg, char **argv)
{
    if (arg == 0)
        return (-1);
    printf("mon output %i, la vraie fonction %i \n", ft_memcmp(argv[1],argv[2], 1), memcmp(argv[1], argv[2], 1));
    return(0);
}