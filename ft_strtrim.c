/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:09:36 by avannson          #+#    #+#             */
/*   Updated: 2024/12/05 15:12:11 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include "libft.h"

int	ft_isinset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*final;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (s1[start] && ft_isinset(s1[start], (char *)set))
		start++;
	while (end >= start && ft_isinset(s1[end], (char *)set))
		end--;
	final = malloc((end - start + 1) + 1);
	if (!final)
		return (0);
	i = 0;
	while (start <= end)
		final[i++] = s1[start++];
	final[i] = '\0';
	return (final);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n",ft_strtrim("longtemps sayeee mechant tong", "longt"));
	printf("Trimmed: '%s'\n", ft_strtrim("aaaa", "a"));
	return(0);
}*/
