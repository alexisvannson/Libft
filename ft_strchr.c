/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:11:37 by avannson          #+#    #+#             */
/*   Updated: 2024/11/27 15:21:44 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *str, int search_str)
{
    int i;
    char    *new_str;

    new_str = (char*) str;
    if (search_str == 0)
        return (new_str);
    i = 0;
    while (new_str[i])
    {
        if (new_str[i] == search_str)
            return (&new_str[i]);
	i++;
    }
    return (0);
}
