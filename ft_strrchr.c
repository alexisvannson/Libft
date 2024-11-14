/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:12:23 by avannson          #+#    #+#             */
/*   Updated: 2024/11/14 07:12:26 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}


char    *ft_strrchr(const char *s, int c)
{
    int     last_index;

    last_index = ft_strlen(s) - 1;
    while(s[last_index] && s[last_index] != c)
        last_index--;
    if (last_index == 0)
        return (0);
    return (s[last_index]);
}