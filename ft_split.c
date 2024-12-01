/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:05:17 by avannson          #+#    #+#             */
/*   Updated: 2024/12/01 18:28:17 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t i;

    src_len = 0;
    while (src[src_len])
        src_len++;

    if (dstsize == 0)
        return (src_len);

    i = 0;
    while (src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    return (src_len);
}

int word_count(const char *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s == c)
            in_word = 0;
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        s++;
    }
    return (count);
}

int     get_lenword(char const *str, char c)
{
    int len;

    len = 0;
    while(str[len] && str[len] != c)
        len++;
    return (len);
}

char    **ft_split(char const *s, char c)
{
    char    **arr;
    int     len;
    int     i;
    
    i = 0;
    arr = malloc((word_count(s, c) + 1) * sizeof(char *));
    if (!arr)
        return (0);
    while (*s)
    {
        while (*s == c)
            s++;
        len = get_lenword(s, c);
        arr[i] = malloc((len + 1) * sizeof(char*));
        if (! arr[i])
            return (0);
    ft_strlcpy(arr[i], s, len + 1);
    i++;
    s += len;
    }
    arr[i] = 0;
    return (arr);
}
/*
#include <stdio.h>
int main(void)
{
    int i;
    char **sayee;

    i = 0;

    sayee = ft_split("Patrick adore manger de la confiture de framboise!", ' ');
    if (sayee == NULL) {
        fprintf(stderr, "Erreur lors de la division de la chaîne.\n");
        return (1);
    }

    while (sayee[i]) {
        printf("%s\n", sayee[i]);
        i++;
    }

    return (0);
}
*/
/*Multiple consecutive delimiters
Delimiters at the start or end of the string
Proper memory allocation and error handling
Null-termination of the result array
*/