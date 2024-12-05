/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <avannson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:12:23 by avannson          #+#    #+#             */
/*   Updated: 2024/12/05 12:46:21 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			last_occurrence = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (last_occurrence);
}
