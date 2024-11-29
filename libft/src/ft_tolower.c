/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:16:28 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/18 17:56:38 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Converts a character to lowercase.
///
/// This function converts the character `c` to its lowercase equivalent if
/// it is an uppercase letter. If `c` is already lowercase or is not a letter,
/// it returns the character unchanged.
///
/// @param c The character to convert to lowercase.
///
/// @return The lowercase equivalent of `c`, or `c` itself if it is not
///         an uppercase letter.
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
