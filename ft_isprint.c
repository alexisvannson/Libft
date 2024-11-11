/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:08:59 by avannson          #+#    #+#             */
/*   Updated: 2024/11/11 13:10:06 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char str)
{
	if (str >= 40 && str <= 176)
		return (1);
	return (0);
}
/*
int main(void)
{
    printf("%s\n", ft_isprint('a'));  
    printf("%s\n", ft_isprint('8'));  
    printf("%s\n", ft_isprint(''));  
    
    return 0;
}*/
