/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <avannson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:11:59 by avannson          #+#    #+#             */
/*   Updated: 2024/12/05 16:48:42 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*       Copy a string. Copy src to string dst of size siz. At most siz-1
		characters will be copied. Always NULL terminates (unless siz == 0).
*/
#include <stddef.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	len_src;

	if (!dst || !src)
		return (0);
	len_src = (size_t)ft_strlen((char *)src);
	if (len_src + 1 < siz)
	{
		ft_memcpy(dst, src, len_src);
		dst[len_src] = '\0';
	}
	else if (siz != 0)
	{
		ft_memcpy(dst, src, siz - 1);
		dst[siz - 1] = '\0';
	}
	return (len_src);
}
