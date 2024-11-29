/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:17:59 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/15 13:42:33 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief is used to check whether a given character is a digit (0 through 9).
/// @param num The character to be checked, typically passed as an int value.
/// The character should be representable as an unsigned char or the value
/// of EOF.
/// @return It returns 1 if true and 0 if false.
int	ft_isdigit(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	else
		return (0);
}
