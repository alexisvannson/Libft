/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:17:03 by avannson          #+#    #+#             */
/*   Updated: 2024/11/27 18:34:16 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char    *str1;
	unsigned char    *str2;

	str1 = (unsigned char*) s1;
	str2 = (unsigned char*) s2;
	if (n == 0)
		return (0);
	while (n-- > 0)
		if (str1[n - 1] != str2[n - 1])
			return (str1[n - 1] - str2[n - 1]);
	return (0);
}
/*
int	main(void)
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	
	 printf("ma fnct %i \n", ft_memcmp(s, s2, 1));
	 printf("ma fnct %i \n", memcmp(s, s2, 1));
	 printf("ma fnct %i \n", ft_memcmp(s2, s, 1));
	 printf("ma fnct %i \n", memcmp(s2, s, 1));
	return (0);
} */




/*
#include <stdio.h>
int main(void)
{
    char sCpy[] = {-128, 0, 127, 0};
    char s[] = {-128, 0, 127, 0};
    
    unsigned char bytes1[] = {0x41, 0x42, 0x43, 0x44, 0x45}; // 'A', 'B', 'C', 'D', 'E' en ASCII
    unsigned char bytes2[] = {0x41, 0x42, 0x43, 0x44, 0x46}; // 'A', 'B', 'C', 'D', 'F' en ASCII

    int result = memcmp(bytes1, bytes2, sizeof(bytes1));
    int myresult = ft_memcmp(bytes1, bytes2, sizeof(bytes1));

    printf("%d  my result:%d\n", result, myresult);

    printf("my stuff: %i\n",ft_memcmp(s, sCpy, 4));
    printf("expected: %i\n",memcmp(s, sCpy, 4));
    return(0);
}*/
