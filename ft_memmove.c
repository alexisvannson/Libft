/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:36:37 by avannson          #+#    #+#             */
/*   Updated: 2024/11/27 18:57:00 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *src2;
    char    *dst2;
    size_t    i;
    
    if (!dst && !src)
        return (NULL);
    src2 = (char *) src;
    dst2 = (char *) dst;
    i = 0;
    if (dst2 > src2)
        while (len-- > 0)
            dst2[len] = src2[len];
    else
    {
        while (i++ < len)
            dst2[i] = src2[i];
    }
    return (dst);
}
