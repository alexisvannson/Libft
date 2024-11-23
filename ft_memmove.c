/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:22:46 by avannson          #+#    #+#             */
/*   Updated: 2024/11/22 23:14:15 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	int	len;
	char	*destination;
	char	*source;
	char	temp[n];

	len = (int) n;
	destination = (char*) dest;
	source = (char*) src;
	i = 0;
	while (i < len)
	{
		temp[i] = source[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (temp[i])
	{
		destination[i] = temp[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}