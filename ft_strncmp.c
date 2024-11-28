/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:11:04 by avannson          #+#    #+#             */
/*   Updated: 2024/11/28 15:13:22 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp( const char * first, const char * second, size_t length )
{
    int i;
    int len;
    
    i = 0;
    len = (int) length;
    while (first[i] && second[i] && i < len)
    {
            if (first[i] != second[i])
                return (first[i] - second[i]);
            i++;
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    printf("Test 1: %d\n", ft_strncmp("abc", "abc", 3)); // 0
    printf("Test 2: %d\n", ft_strncmp("abc", "abd", 3)); // < 0
    printf("Test 3: %d\n", ft_strncmp("abd", "abc", 3)); // > 0
    printf("Test 4: %d\n", ft_strncmp("abc", "abcde", 5)); // 0
    printf("Test 5: %d\n", ft_strncmp("abcde", "abc", 3)); // 0
    printf("Test 6: %d\n", ft_strncmp("abc", "abd", 2)); // 0
    return 0;
}
*/
