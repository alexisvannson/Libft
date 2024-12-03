/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:11:46 by avannson          #+#    #+#             */
/*   Updated: 2024/12/03 22:36:02 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	if (!dest || !src)
		return (0);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	// If `len` is smaller than or equal to the length of `dest`, return `len + src_len`
	if (len <= dest_len)
		return (len + src_len);

	// Start appending from the end of `dest`
	i = 0;
	while (src[i] && (dest_len + i < len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest_len + src_len);
}


/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (!arc)
		return(0);
	printf("", ft_strlcat(argv[1], argv[2], 5));
}*/