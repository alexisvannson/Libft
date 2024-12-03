/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:12:23 by avannson          #+#    #+#             */
/*   Updated: 2024/12/03 22:02:50 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *last_occurrence;
    
    last_occurrence = NULL;
    while (*s)
    {
        if (*s == (char)c)
            last_occurrence = (char *)s; 
        s++;
    }
    if (c == '\0') 
        return (char *)s;

    return last_occurrence;
}