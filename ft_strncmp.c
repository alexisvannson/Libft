/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:11:04 by avannson          #+#    #+#             */
/*   Updated: 2024/12/03 22:02:59 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    printf("Test 1: %d\n", ft_strncmp("abcdef", "abc\375xxllbadvfghaevofgrvoqallll", 5)); // -1   
    printf("Test 2: %d\n", ft_strncmp("abc", "abd", 3)); // < 0
    printf("Test 3: %d\n", ft_strncmp("abd", "abc", 3)); // > 0
    printf("Test 4: %d\n", ft_strncmp("abc", "abcde", 5)); // 0
    printf("Test 5: %d\n", ft_strncmp("abcde", "abc", 3)); // 0
    printf("Test 6: %d\n", ft_strncmp("abc", "abd", 2)); // 0
    return 0;
}
*/