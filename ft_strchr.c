/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <avannson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:11:37 by avannson          #+#    #+#             */
/*   Updated: 2024/12/05 16:38:22 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	while (*str)
	{
		if (*str == (char)search_str)
			return ((char *)str);
		str++;
	}
	if ((char)search_str == '\0')
		return ((char *)str);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*str = "Hello, world!";

	printf("Test 1: %s\n", ft_strchr(str, 'o')); // "o, world!"
	printf("Test 2: %s\n", ft_strchr(str, 'H')); // "Hello, world!"
	printf("Test 3: %s\n", ft_strchr(str, 'z')); // "(null)"
	printf("Test 4: %s\n", ft_strchr(str, '\0')); // ""
	return (0);
}
*/
