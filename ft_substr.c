/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:18:51 by avannson          #+#    #+#             */
/*   Updated: 2024/11/18 09:26:31 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;
    int j;
    
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
    return (sub);
}