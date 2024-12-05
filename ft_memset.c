/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <avannson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:03:37 by avannson          #+#    #+#             */
/*   Updated: 2024/12/05 16:38:22 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	char	*str;
	int		i;
	int		len;

	len = (int) n;
	str = (char *) ptr;
	i = 0;
	while (i < len)
	{
		str[i] = x;
		i++;
	}
	return (str);
}
