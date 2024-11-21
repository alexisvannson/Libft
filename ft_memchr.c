/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:35:49 by avannson          #+#    #+#             */
/*   Updated: 2024/11/21 13:13:08 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*La fonction memchr() examine les n premiers octets de la zone mémoire pointée par s à la recherche du caractère c. Le premier octet correspondant  c (interprété comme un unsigned char) arrête l'opération.
Les fonctions memchr() et memrchr() renvoient un pointeur sur l'octet correspondant, ou NULL si le caractère n'est pas présent dans la zone de mémoire concernée. */


void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *str;
    unsigned char   uc;

    i = 0;
    str = (unsigned char *)s; 
    uc = (unsigned char)c;    
    while (i < n)             
    {
        if (str[i] == uc)
            return ((void *)&str[i]);
        i++;
    }
    return (0); 
}
