/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:24:22 by avannson          #+#    #+#             */
/*   Updated: 2024/11/28 17:04:56 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    // Si little est une chaîne vide, retourner big
    if (little[0] == '\0')
        return ((char*) big);

    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        // Comparer chaque caractère de 'little' avec la portion de 'big'
        while (big[i + j] == little[j] && (i + j) < len)
        {
            j++;
            // Si on atteint la fin de 'little', on a trouvé une correspondance
            if (little[j] == '\0')
                return ((char*) (big + i));
        }
        i++;
    }
    return (NULL);
}
/*
#include <stdio.h>

int main()
{
    printf("Test 1: %s\n", ft_strnstr("hello world", "world", 10)); // Devrait retourner "world"
    printf("Test 2: %s\n", ft_strnstr("hello world", "world", 5));  // Devrait retourner NULL
    printf("Test 3: %s\n", ft_strnstr("hello world", "", 5));        // Devrait retourner "hello world"
    printf("Test 4: %s\n", ft_strnstr("hello world", "world", 20));  // Devrait retourner "world"

    return 0;
}
*/
