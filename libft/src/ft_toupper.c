/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:14:51 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/18 17:57:29 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Converts a character to uppercase.
///
/// This function converts the character `c` to its uppercase equivalent if
/// it is a lowercase letter. If `c` is already uppercase or is not a letter,
/// it returns the character unchanged.
///
/// @param c The character to convert to uppercase.
///
/// @return The uppercase equivalent of `c`, or `c` itself if it is not
///         a lowercase letter.
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
