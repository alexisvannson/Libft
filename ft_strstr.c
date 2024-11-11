/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:21:33 by avannson          #+#    #+#             */
/*   Updated: 2024/07/16 14:09:38 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;
	int	j;

	len = get_len(to_find);
	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[j] && str[i] != 0)
		{
			i++;
			j++;
		}
		if (j == len)
			return (&str[i - j]);
		j = 0;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "j'aime mager des pates avec du riz";
	char to_find[] = "des";
	printf("%s\n", ft_strstr(str, to_find));
	//printf("%s\n", strstr());
	return (0);
}
*/
