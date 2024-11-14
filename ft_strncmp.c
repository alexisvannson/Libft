/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:11:04 by avannson          #+#    #+#             */
/*   Updated: 2024/11/14 07:22:37 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp( const char * first, const char * second, size_t length )
{
    int i;
    int len;
    
    i = 0;
    len = (int) length;
    while (first[i] && second[i] && i < len)
    {
            if (first[i] == second[i])
                return (first[i] - second[i]);
            i++;
    }
    return (first[i] - second[i]);
}