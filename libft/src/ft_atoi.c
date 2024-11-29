/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:14:03 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 14:18:26 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	if (('\t' <= c && '\r' >= c) || c == ' ')
		return (1);
	else
		return (0);
}

/// @brief It converts a string representing a number
/// to its integer equivalent.
/// @param str A pointer to a null-terminated string that
/// contains the number to be converted.
/// @return The function returns the integer value of the string.
int	ft_atoi(const char *str)
{
	int	i;
	int	i_minus;
	int	num;

	i = 0;
	i_minus = 0;
	num = 0;
	while (str[i] != '\0' && is_space(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			i_minus++;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (i_minus > 0)
		return (-num);
	return (num);
}
