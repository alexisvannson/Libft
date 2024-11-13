/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:22:46 by avannson          #+#    #+#             */
/*   Updated: 2024/11/13 12:48:54 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	int	len;
	char	*destination;
	char	*source;
	char	temp[n];

	len = (int) n;
	destination = (char*) dest;
	source = (char*) src;
	i = 0;
	while (i < len)
	{
		temp[i] = source[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (i <= len)
	{
		destination[i] = temp[i];
		i++;
	}
	return (destination);
}
/* A C program to demonstrate working of memmove */
#include <stdio.h> 
#include <string.h> 

int main(void) 
{ 
	char str1[] = "Geeks"; // Array of size 100 
	char str2[] = "Quiz"; // Array of size 5 

	puts("str1 before memmove "); 
	puts(str1); 

	/* Copies contents of str2 to sr1 */
	ft_memmove(str1, str2, sizeof(str2)); 

	puts("\nstr1 after memmove "); 
	puts(str1); 

	return 0; 
}

