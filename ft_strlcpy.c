/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:11:59 by avannson          #+#    #+#             */
/*   Updated: 2024/11/23 17:47:22 by avannson         ###   ########.fr       */
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
int	ft_strlcpy(char * dst, const char * src, int siz)
{
	char	*source;
	char	*dest;
	int	taille_dest;
	int	i;

	source = (char*) src;
	dest = (char*) dst;
	taille_dest = siz - 1;
	i = 0;
	if (siz == 0)
		return (0);
	while (source[i] && i < taille_dest)
	{
		dest[i] = source[i];
		i++;	
	}
	dst[i] = '\0';
	return ((unsigned long) ft_strlen(source));
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (!argc)
		return(0);
	printf("ma version: %d , %s\n", ft_strlcpy(argv[1], argv[2], 5), argv[1]);
	printf("la leurs: %lu , %s\n", strlcpy(argv[1], argv[2], 5), argv[1]);
}*/