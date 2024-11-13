/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:18:19 by avannson          #+#    #+#             */
/*   Updated: 2024/11/13 12:34:09 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	char	*to;
	char	*from;
	int	len;

	to = (char*) dest;
	from = (char*) src;
	len = n;

	i = 0;
	while (i < len)
	{
		to[i] = from[i];
		i++;
	}
	return (to);
}
/*
// C program to demonstrate working of memcpy
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";

    puts("str1 before memcpy ");
    puts(str1);

    // Copies contents of str2 to str1
    ft_memcpy(str1, str2, sizeof(str2));

    puts("\nstr1 after memcpy ");
    puts(str1);

    return 0;
}
*/
