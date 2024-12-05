/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <avannson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:47:23 by avannson          #+#    #+#             */
/*   Updated: 2024/12/05 16:38:22 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	get_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

int	special_cases(int n, char *str)
{
	if (n == 0)
	{
		str[0] = '0';
		return (0);
	}
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		return (147483648);
	}
	if (n < 0)
	{
		str[0] = '-';
		return (-n);
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = get_size(n);
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (0);
	str[size] = '\0';
	n = special_cases(n, str);
	while (n != 0)
	{
		str[--size] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s \n", ft_itoa(-42));
	printf("%s \n", ft_itoa(42));
	printf("%s \n", ft_itoa(214783647));
	printf("%s \n", ft_itoa(-214783648));
	return (0);
}*/
