/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:09:36 by avannson          #+#    #+#             */
/*   Updated: 2024/11/18 18:24:44 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strtrim(char const *s1, char const *set)
{
    int strt;
    int end;
    int i;
    char    *trimmed;

    strt = 0;
    i = 0;
    end =  ft_strlen(s1) - 1;
    while (s1[strt])
        strt++;
    while (s1[end])
        end--;
    end = ft_strlen(s1) - end;
    strt--;
    trimmed = malloc(ft_strlen(s1)- end - strt);
    if (!trimmed)
        return (0);
    while(strt < end)
    {
        trimmed[i] = s1[strt];
        strt++;
    }
    trimmed[i] = '\0';
    return (trimmed);
}