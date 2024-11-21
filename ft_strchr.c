/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:11:37 by avannson          #+#    #+#             */
/*   Updated: 2024/11/20 21:20:33 by avannson         ###   ########.fr       */
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