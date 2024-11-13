/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:38:39 by avannson          #+#    #+#             */
/*   Updated: 2024/11/13 14:57:18 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*       Copy a string. Copy src to string dst of size siz. At most siz-1
       characters will be copied. Always NULL terminates (unless siz == 0).
*/

size_t	ft_strlcpy(char * dst, const char * src, size_t siz)
{
	char	*source;
	int	taille_dest;
	int	i;

	source = (char*) src;
	taille_dest = siz - 1;
	i = 0;
	if (siz == 0)
		return ;
	while (source[i] && i < taille_dest)
	{
		dst[i] = source[i];
		i++;	
	}
	dst[i] = '\0';
	return (ft_str
}


