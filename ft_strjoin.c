/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:36 by avannson          #+#    #+#             */
/*   Updated: 2024/11/20 13:16:41 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int ft_strlen(char *s);

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char    *final;
    
    final = malloc(ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1);
    if (!final)
        return (0);
    i = 0;
    j = 0;
    while(s1[i])
    {
        final[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        final[i + j] = s2[j];
        j++;
    }
    final[i + j] = '\0';
    return (final);
}