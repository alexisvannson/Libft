/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:05:17 by avannson          #+#    #+#             */
/*   Updated: 2024/11/28 12:07:48 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

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
    
    nb_delimiters = count_delimiters((char*)s, c);
    arr = malloc(nb_delimiters + 1);
    j = 0;
    k = 0;
    i = 0;
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
/*
#include <stdio.h>
int main(void)
{
    int i;
    char **sayee;

    i = 0;

    sayee = ft_split("Patrick adore manger de la confiture de framboise!", ' ');
    if (sayee == NULL) {
        fprintf(stderr, "Erreur lors de la division de la chaîne.\n");
        return (1);
    }

    while (sayee[i]) {
        printf("%s\n", sayee[i]);
        i++;
    }

    return (0);
}*/
