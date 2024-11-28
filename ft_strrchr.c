/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:12:23 by avannson          #+#    #+#             */
/*   Updated: 2024/11/28 15:32:15 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str);

char    *ft_strrchr(const char *str, int search_str)
{
    int i;
    char    *new_str;
    
    new_str = (char*) str;
    if (search_str == '\0')
        return ((char *)str + ft_strlen((char *)str));
    i = ft_strlen(new_str);
    while (i >= 0)
    {
        if (str[i] == search_str)
            return ((char*)&str[i]);
	i--;
    }
    return (0);
}
