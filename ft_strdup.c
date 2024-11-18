/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:48:39 by avannson          #+#    #+#             */
/*   Updated: 2024/11/18 08:54:16 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    char    *cpy;
    int i;

    while(s1[i])
        i++;
    cpy = malloc(i+1);
    if (!cpy)
        return (0);
    i = 0;
    while (s1[i])
    {
        cpy[i] = s1[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}