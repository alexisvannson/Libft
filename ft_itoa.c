/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:47:23 by avannson          #+#    #+#             */
/*   Updated: 2024/11/28 15:02:03 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char    *fill_str( char* mem, int offset, int n, int size)
{
    while (n > 0 && (size > offset))
    {
        mem[size - 1] = n % 10 + '0';
        n = n / 10;
        size --;
    }
    return (mem);
}

char    *ft_itoa(int n)
{   
    char    *str;
    int size;

    size = get_size(n);
    str = malloc(size * sizeof(char) + 1);
    if (!str)
        return (0);
    if (n == 0)
        return ("0");
    if (n == -2147483648)
    {
        str[0] = '-';
        str[1] = '2';
        return(fill_str(str, 2, 147483648, size));
    }
    if (n < 0)
    {
        str[0] = '-';
        str[1] = '2';
        n = - n;
    }
    return(fill_str(str, 0, n, size));
}

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
}
