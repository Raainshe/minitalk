/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:35:53 by rmakoni           #+#    #+#             */
/*   Updated: 2024/12/18 12:39:16 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if a string represents a valid numeric value.
 *
 * @param str The string to be checked for numeric validity.
 * @return int 1 if the string is a valid number, 0 otherwise.
 *
 * This function validates that a string represents a valid integer:
 * - Allows an optional leading '+' or '-' sign
 * - Requires all subsequent characters to be digits
 * - Handles positive and negative numbers
 * - Returns 0 for NULL, empty strings, or strings with non-numeric characters
 *
 * Examples:
 *   "123"   -> returns 1
 *   "-456"  -> returns 1
 *   "+789"  -> returns 1
 *   "12a34" -> returns 0
 *   ""      -> returns 0
 *   NULL    -> returns 0
 */
int	ft_str_is_numeric(char *str)
{
	size_t	i;

	if (!str || *str == '\0')
		return (0);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
