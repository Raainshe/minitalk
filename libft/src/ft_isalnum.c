/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:22:19 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 18:32:07 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief is used to check whether a given character is alphanumeric,
/// meaning it is either a letter (uppercase or lowercase) or a digit.
/// @param c The character to be checked, typically passed as an int
/// value. The character should be representable as an unsigned char
/// or the value of EOF.
/// @return The function returns a non-zero value (true) if the
/// character is alphanumeric. It returns 0 (false) if the character
/// is not alphanumeric.
int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (1);
	else
		return (0);
}
