/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippevannson <philippevannson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:33:22 by philippevan       #+#    #+#             */
/*   Updated: 2024/11/12 07:47:01 by philippevan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *str, int search_str)
{
    int i;
    char    *new_str;
    
    new_str = (char *) str;
    i = 0;
    while (new_str[i])
    {
        if (new_str[i] == search_str)
            return (&new_str[i]); 
            i++;
    }
    return (0);
}
/*
#include <stdio.h> 
int main(void)
{
    printf("%s\n", ft_strchr("alexis", 'e'));
}*/