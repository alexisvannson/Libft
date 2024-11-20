/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zft_strtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:09:36 by avannson          #+#    #+#             */
/*   Updated: 2024/11/20 15:51:13 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
int ft_strlen(char *str);

char    *ft_strtrim(char const *s1, char const *set)
{
    int len;
    int  i;
    char *trimmed;

    len = ft_strlen((char*)set);
    trimmed = malloc(ft_strlen((char*)s1) - (2 * len) + 1);
    i = len - 1;
    if (!trimmed)
        return (0);
    while (i < ft_strlen((char*)s1) - len)
    {
        trimmed[i] = s1[i];
        i++;
    }
    return (trimmed);   
}