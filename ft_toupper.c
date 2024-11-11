/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:32:37 by avannson          #+#    #+#             */
/*   Updated: 2024/11/11 16:37:45 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convert a lowercase character to uppercase
char	get_char(char str)
{
	if (str >= 'a' && str <= 'z')
		return (str - 32);
	return (str);
}

// Convert a string to uppercase in place
void	ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = get_char(str[i]);
		i++;
	}
}
