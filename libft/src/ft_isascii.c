/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:42:23 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 18:10:43 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief is used to check whether a given character is an ASCII character.
/// @param c The character to be checked, typically passed as an int value.
/// The character should be representable as an unsigned char or the value of
/// EOF.
/// @return It returns 1 if true and 0 if false.
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
