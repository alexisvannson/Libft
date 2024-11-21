/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:11:59 by avannson          #+#    #+#             */
/*   Updated: 2024/11/20 21:20:52 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*       Copy a string. Copy src to string dst of size siz. At most siz-1
       characters will be copied. Always NULL terminates (unless siz == 0).
*/
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
size_t	ft_strlcpy(char * dst, const char * src, size_t siz)
{
	char	*source;
	int	taille_dest;
	int	i;

	source = (char*) src;
	taille_dest = siz - 1;
	i = 0;
	if (siz == 0)
		return (0);
	while (source[i] && i < taille_dest)
	{
		dst[i] = source[i];
		i++;	
	}
	dst[i] = '\0';
	return (ft_strlen(source));
}