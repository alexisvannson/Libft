/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:28:13 by avannson          #+#    #+#             */
/*   Updated: 2024/12/03 22:06:19 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *str;

    str = ft_itoa(n); 
    if (!str)
        return;
    write(fd, str, ft_strlen(str)); 
    free(str);
}
