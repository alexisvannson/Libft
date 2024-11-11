/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:47:48 by avannson          #+#    #+#             */
/*   Updated: 2024/11/11 16:46:07 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_toint(char c)
{
	return (c - '0');
}

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	value;
	int	i;
	int	sign;

	i = 0;
	value = 0;
	sign = 1;
	while (!(str[i] >= 48 && str[i] <= 57))
	{
		if (str[i] == '-')
		sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		value = 10 * value + char_toint(str[i]);
		i++;
	}
	return (sign * value);
}
/*
int     main(void)
{
    printf("%i", ft_atoi("2763848"));
    return (0);
}
*/
