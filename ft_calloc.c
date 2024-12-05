/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <avannson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:44:14 by avannson          #+#    #+#             */
/*   Updated: 2024/12/05 12:44:15 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

/*The calloc() function contiguously allocates enough space for count
		objects that are size bytes of memory each and returns a pointer to the
		allocated memory.  The allocated memory is filled with bytes of value
		zero.*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	buffer = malloc(count * size);
	if (!buffer)
		return (0);
	ft_bzero(buffer, count * size);
	return (buffer);
}
