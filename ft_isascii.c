/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippevannson <philippevannson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:03:13 by avannson          #+#    #+#             */
/*   Updated: 2024/11/12 06:45:17 by philippevan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
    if (c >= 0 && c <= 177)
        return (1);
    return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    printf("la mienne: %i\n",ft_isascii('a'));
    printf("la vraie: %i\n", isascii('a'));
    printf("la mienne: %i\n",ft_isascii(' '));
    printf("la vraie: %i\n", isascii(' '));
    return(0);
}*/