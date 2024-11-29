/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:48:47 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/15 13:42:54 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief is used to check whether a given character is printable, including
/// space. Printable characters are those that occupy visible space on
/// a display.
/// @param c The character to be checked, typically passed as an int value.
/// The character should be representable as an unsigned char or the value
/// of EOF.
/// @return It returns 1 if true and 0 if false.
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
