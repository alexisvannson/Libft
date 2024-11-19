/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:22:44 by avannson          #+#    #+#             */
/*   Updated: 2024/11/19 11:25:57 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *str);

void    ft_putendl_fd(char *str, int fd)
{
    write(fd, str, ft_strlen(str));
    write(fd, "\n", 1);
}