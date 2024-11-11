/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:50:30 by avannson          #+#    #+#             */
/*   Updated: 2024/11/11 12:55:28 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			if (!(str[i] >= 97 && str[i] <= 122))
				return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int     main(void)
{
    printf("%d", ft_isalpha("sayeeee"));
    printf("%d", ft_isalpha("sayeeee&"));
}*/
