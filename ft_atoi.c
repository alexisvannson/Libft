/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:47:48 by avannson          #+#    #+#             */
/*   Updated: 2024/12/04 12:02:00 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int char_toint(char c)
{
    return (c - '0');
}

int ft_atoi(char *str)
{
    int value;
    int i;
    int sign;

    if (!str)
        return (0);
    i = 0;
    value = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-') 
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        value = 10 * value + char_toint(str[i]);
        i++;
    }
    return (sign * value);
}
/*
#include <stdio.h>

int main(void) {
    const char *str1 = "  -----712645809h";
    const char *str3 = "  -789";
    const char *str4 = "  123abc";

    printf("The integer value is: %d\n", atoi((char *)str1)); // Output: -123
    printf("The integer value is: %d\n", ft_atoi((char *)str1)); // Output: 456
    printf("The integer value is: %d\n", ft_atoi((char *)str3)); // Output: -789
    printf("The integer value is: %d\n", ft_atoi((char *)str4)); // Output: 123

    return 0;
}*/
