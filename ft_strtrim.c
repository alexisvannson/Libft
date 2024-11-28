/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:09:36 by avannson          #+#    #+#             */
/*   Updated: 2024/11/28 18:22:12 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
//#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

int	ft_isinset(char c,char *set)
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

char    *ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	int	i;
	char	*final;
	char	*str;
	char	*trimmed;

	str = (char *) s1;
	trimmed = (char *) set;
	start = 0;
	end = ft_strlen(str) - 1;
	while (str[start] && ft_isinset(str[start], trimmed))
		start++;
	while (str[end] && ft_isinset(str[end], trimmed))
		end--;
	final = malloc((end - start + 1) + 1);
	i = 0;
	while (start <= end)
	{
		final[i] = str[start];
		start++;
		i++;
	}
	final[i] = '\0';
	return (final);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n",ft_strtrim("longtemps sayeee mechant tong", "longt"));
	return(0);
}*/

