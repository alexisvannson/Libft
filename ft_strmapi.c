/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:51:49 by avannson          #+#    #+#             */
/*   Updated: 2024/11/18 19:58:03 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str);

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    char   *new_str;
    int i;
    
    i = 0;
    len = ft_strlen(s);
    new_str = malloc(len + 1);
    if (!new_str)
        return (0);
    while (s[i])
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return (new_str); 
}