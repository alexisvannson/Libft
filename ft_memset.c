/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:03:37 by avannson          #+#    #+#             */
/*   Updated: 2024/11/13 12:12:56 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	int	i;
	int	len;
	char	*str;

	len = (int) n;
	str = (char *) ptr;
	i = 0;
	while (i < len)
	{
		str[i] = x;
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>


/*int main( void )
{
   char buffer[] = "This is a test of the memset function";

   printf( "Before: %s\n", buffer );
   ft_memset( buffer, '*', 4 );
   printf( "After:  %s\n", buffer );
 return (0);
}

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main()
{
    int n = 10;
    int arr[n];

    // Fill whole array with 0.
    ft_memset(arr, 0, n*sizeof(arr[0]));
    printf("Array after memset()\n");
    printArray(arr, n);

    return 0;
}*/
