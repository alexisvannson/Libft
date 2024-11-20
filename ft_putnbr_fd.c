/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:28:13 by avannson          #+#    #+#             */
/*   Updated: 2024/11/20 13:08:41 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str);
char *ft_itoa(int n);

void    ft_putnbr_fd(int n, int fd)
{
    char    *str;

    str = ft_itoa(n);
    write(fd, str, ft_strlen(str));
}