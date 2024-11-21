/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:03:37 by avannson          #+#    #+#             */
/*   Updated: 2024/11/20 21:20:09 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	int	i;
	int	len;
	char	*str;

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