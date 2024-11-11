/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:32:08 by avannson          #+#    #+#             */
/*   Updated: 2024/07/16 16:12:10 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sum;

	i = str_len(dest);
	j = 0;
	sum = str_len(dest) + str_len(src);
	if (size == 0 || size <= str_len(dest))
		return (str_len(src) + size);
	while (src[j] && (i < size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (sum);
}
/*
int	main(void)
{
	char	dest[] = "sayee";
	char	src[] = "monreuf";
	
	printf("%d\n",ft_strlcat(dest, src, 0));
	printf("%s\n",dest);
}*/
