/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:44:14 by avannson          #+#    #+#             */
/*   Updated: 2024/11/28 17:15:30 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

/*The calloc() function contiguously allocates enough space for count
     objects that are size bytes of memory each and returns a pointer to the
     allocated memory.  The allocated memory is filled with bytes of value
     zero.*/

void *ft_calloc(size_t count, size_t size)
{
    void    *buffer;
    
    buffer = malloc(count * size);
    if (!buffer)
        return (0);
    ft_bzero(buffer, count * size);
    return (buffer);
}
