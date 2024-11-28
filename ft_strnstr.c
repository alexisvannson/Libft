/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:24:22 by avannson          #+#    #+#             */
/*   Updated: 2024/11/28 15:08:13 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strlen(char *str);
char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;
    int l;

    if (little[0] == '\0')
        return ((char*)big);
    i = 0;
    j = 0;
    l = (int) len;
    while (big[i])
    {
        if (big[i] == little[j])
            j++;
        if (big[i] != little[i])
            j = 0;
        if ((j + 1) == l)
            return ((char*) (big + (i - j)));
        i++;
    }
    return (NULL);
}

#include <stdio.h>

int main()
{
    const char *big = "Hello World!";
    const char *little1 = "World";
    const char *little2 = "42";
    const char *little3 = "";

    printf("Test 1: %s\n", ft_strnstr(big, little1, 12)); // "World!"
    printf("Test 2: %s\n", ft_strnstr(big, little2, 12)); // "(null)"
    printf("Test 3: %s\n", ft_strnstr(big, little3, 12)); // "Hello World!"
    printf("Test 4: %s\n", ft_strnstr(big, little1, 5));  // "(null)"
    return 0;
}

