/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippevannson <philippevannson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:03:37 by avannson          #+#    #+#             */
/*   Updated: 2024/11/12 07:03:37 by philippevan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// The memset() function writes len bytes of value x (converted to an unsigned char) to the string b.
void    *memset(void *b, int c, size_t len)
{
	int	i;
    int n;
    unsigned char x;
    char    *str;
    
    x = (unsigned char) c;
    n = (int) len;
    str = (char*) b;
	i = 0;
	while (i < n)
	{
		str[i] = x;
		i++;
	}
}

#include <stdio.h>
#include <string.h>

void    printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main(void)
{
    int n = 10;
    int arr[n];

    // Fill whole array with 3.
    memset(arr, 3, n*sizeof(arr[0]));
    printf("Array after memset()\n");
    printArray(arr, n);

    return (0);
}
