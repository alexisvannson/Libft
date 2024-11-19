/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:28:13 by avannson          #+#    #+#             */
/*   Updated: 2024/11/19 13:39:39 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(str);

void    ft_putnbr_fd(int n, int fd)
{
    char    *str;

    str = ft_itoa(n);
    write(fd, str, ft_strlen(str));
}