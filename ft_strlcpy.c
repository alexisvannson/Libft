/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippevannson <philippevannson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:07:26 by philippevan       #+#    #+#             */
/*   Updated: 2024/11/12 07:26:24 by philippevan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*  strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in dstsize.  Also note that strlcpy() and strlcat() only operate on true ''C'' strings. This means
     that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst() must be NUL-terminated.

     strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0. */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t   ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{     
    int len;
    int i;
    
    len = dstsize - 1;
    i = 0;
    while (src[i] && i < len)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = src[i];
    return (sizeof(dst));
}
#include <libc.h>
#include <stdio.h>

int main(void)
{
    char* str1 = "alexis";
    char*   str2 = "lol";
    
    ft_strlcpy(str1, str2, 6);
    printf("%s", str1);
}