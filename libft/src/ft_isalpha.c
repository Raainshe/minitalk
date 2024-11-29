/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:13:23 by rmakoni           #+#    #+#             */
/*   Updated: 2024/11/25 12:28:13 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief is used to check whether a given character
/// is an alphabetic letter (either uppercase or lowercase).
/// @param c The character to be checked, typically passed
/// as an int value. The character should be representable
/// as an unsigned char or the value of EOF.
/// @return The function returns a non-zero value (true) if
/// the character is an alphabetic letter.
/// It returns 0 (false) if the character is not an alphabetic letter.
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
