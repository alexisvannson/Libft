/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <avannson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:18:19 by avannson          #+#    #+#             */
/*   Updated: 2024/12/05 16:38:22 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*to;
	char	*from;
	int		len;

	to = (char *)dest;
	from = (char *)src;
	len = n;
	i = 0;
	while (i < len)
	{
		to[i] = from[i];
		i++;
	}
	return (to);
}
