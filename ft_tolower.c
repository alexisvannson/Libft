/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:29:28 by avannson          #+#    #+#             */
/*   Updated: 2024/11/11 16:32:22 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convert a lowercase character to uppercase
char	get_char(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (str + 32);
	return (str);
}

// Convert a string to uppercase in place
char	*ft_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = get_char(str[i]);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
    
    char str1[] = "sayeeee&";
    char str2[] = "SAKNDL";

    ft_tolower(str1);
    ft_tolower(str2);

    printf("%s\n", str1);  // Output: SAYEEEE&
    printf("%s\n", str2);  // Output: SAKNDL
    
    return 0;
}*/
