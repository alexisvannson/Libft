/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <avannson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:05:17 by avannson          #+#    #+#             */
/*   Updated: 2024/12/05 16:47:59 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void	free_array(char **arr, int i)
{
	while (i >= 0)
		free(arr[i--]);
	free(arr);
}

int	word_count(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

int	get_lenword(const char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char	**fill_table(const char *s, char c, char **arr)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		len = get_lenword(s, c);
		arr[i] = malloc((len + 1) * sizeof(char));
		if (!arr[i])
		{
			free_array(arr, i - 1);
			return (0);
		}
		ft_strlcpy(arr[i], s, len + 1);
		i++;
		s += len;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;

	if (!s)
		return (0);
	arr = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (0);
	return (fill_table(s, c, arr));
}

/*int	main(void)
{
	int		i;
	char	**sayee;

	i = 0;
	sayee = ft_split("hello!zzz zzsayeeeeeeez zzlo  ", 'z');
	if (sayee == NULL)
	{
		fprintf(stderr, "Erreur lors de la division de la chaîne.\n");
		return (1);
	}
	while (sayee[i])
	{
		printf("%s\n", sayee[i]);
		i++;
	}
	return (0);
}*/
