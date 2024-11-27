/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:18:51 by avannson          #+#    #+#             */
/*   Updated: 2024/11/27 19:08:01 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;
    int j;
    
    sub = malloc(len + 1);
    if (!sub)
        return (0);
    i = 0;
    j = start;
    while (i < len)
    {
        sub[i] = s[j];
        i++;
        j++;
    }
    return (sub);
}

int	main(int argc, char **argv)
{
	if (!argc)
		return (0);
	printf("%s \n", ft_sustr(argv[1],arv[2], 15));
	printf("%s \n", substr(argv[1],arv[2], 15));

	printf("%s \n", ft_sustr(argv[1],arv[2], 5));
	printf("%s \n", ft_sustr(argv[1],arv[2], 5));

	printf("%s \n", substr(argv[1],arv[2], 0));
	printf("%s \n", substr(argv[1],arv[2], 0));
	return (0);
}
