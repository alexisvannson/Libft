/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:18:51 by avannson          #+#    #+#             */
/*   Updated: 2024/11/28 17:27:51 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t	i;
    size_t	j;
    
    if (start >= ft_strlen(s))// Si 'start' dépasse la longueur de la chaîne, retourner une chaîne vide
        return (malloc(1));
    sub = malloc(len + 1);
    if (!sub)
        return (0);
    i = 0;
    j = start;
    while (i < len)
    {
        sub[i] = s[j];
        i++;
        j++;
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
