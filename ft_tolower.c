/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:29:28 by avannson          #+#    #+#             */
/*   Updated: 2024/11/20 21:21:22 by avannson         ###   ########.fr       */
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