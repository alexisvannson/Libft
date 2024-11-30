/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:47:23 by avannson          #+#    #+#             */
/*   Updated: 2024/11/30 12:13:04 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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

char	*fill_str(char *mem, int n, int size)
{
	mem[size] = '\0'; 
	while (size > 0 && n != 0)
	{
		mem[--size] = (n % 10) + '0';
		n = n / 10;
	}
	return (mem);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = get_size(n);
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0) 
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n == -2147483648) 
	{
		str = "-2147483648";
		return (ft_strdup(str));
	}
	if (n < 0) 
	{
		str[0] = '-';
		n = -n;
	}
	return (fill_str(str, n, size));
}

/*
#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(42));
	return (0);
}*/
