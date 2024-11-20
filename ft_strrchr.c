/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:12:23 by avannson          #+#    #+#             */
/*   Updated: 2024/11/20 15:24:41 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int     ft_strlen(char *str);

char    *ft_strrchr(const char *s, int c)
{
    int     last_index;

    last_index = ft_strlen((char*)s) - 1;
    while(s[last_index] && s[last_index] != c)
        last_index--;
    if (last_index == 0)
        return (0);
    return ((char*) (s + last_index));
}