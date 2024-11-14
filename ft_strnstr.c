/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:24:22 by avannson          #+#    #+#             */
/*   Updated: 2024/11/14 07:35:22 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;
    int l;

    if (little == "")
        return (big);
    i = 0;
    j = 0;
    l = (int) len;
    while (big[i])
    {
        if (big[i] == little[i])
            j++;
        if (big[i] != little[i])
            j = 0;
        if ((j + 1) == l)
            return (i - j);
        i++;
    }
    return (0);
}