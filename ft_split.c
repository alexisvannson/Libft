/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:05:17 by avannson          #+#    #+#             */
/*   Updated: 2024/11/18 18:46:03 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     count_delimiters(char *str, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while(str[i])
    {
        if (str[i] == c)
            count++;
        i++;
    }
    return (count);
}
char    **ft_split(char const *s, char c)
{
    int nb_delimiters;
    char    **arr;
    int     i;
    int k;
    int j;   
    
    arr = malloc(nb_delimiters + 1);
    j = 0;
    k = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            arr[j][k] = '\0';
            j++;
            k = 0;
            continue;
        }
        arr[j][k] = s[i];
        k++;
        i++;
    }
    arr[j] = 0;
    return (arr);
}