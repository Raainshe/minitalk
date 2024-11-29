/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:05:00 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 18:06:31 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Compares two strings up to a specified number of characters.
///
/// This function compares the first `n` characters of the strings `s1`
/// and `s2`. It returns an integer less than, equal to, or greater than zero,
/// depending on whether the first `n` characters of `s1` are less than,
/// equal to, or greater than those of `s2`.
///
/// @param s1 The first string to compare.
/// @param s2 The second string to compare.
/// @param n The number of characters to compare.
///
/// @return An integer less than, equal to, or greater than zero if the
///         first `n` characters of `s1` are found to be less than, equal
///         to, or greater than those of `s2`.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
