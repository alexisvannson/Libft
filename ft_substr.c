/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:18:51 by avannson          #+#    #+#             */
/*   Updated: 2024/11/30 11:58:57 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;

    if (!s)
        return (0);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    // Ajuster 'len' si nécessaire pour ne pas dépasser la fin de la chaîne source
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    sub = malloc(len + 1);
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s \n", ft_substr("Bonjour comment ca va?", 5, 8));
	return (0);
}*/
