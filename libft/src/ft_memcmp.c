/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:40:58 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:14:38 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Compares two blocks of memory.
///
/// This function compares the first `n` bytes of the memory blocks `s1`
/// and `s2`. It returns an integer less than, equal to, or greater than zero,
/// depending on whether the first `n` bytes of `s1` are less than, equal to,
/// or greater than those of `s2`.
///
/// @param s1 A pointer to the first memory block to compare.
/// @param s2 A pointer to the second memory block to compare.
/// @param n The number of bytes to compare.
///
/// @return An integer less than, equal to, or greater than zero if the
///         first `n` bytes of `s1` are found to be less than, equal to,
///         or greater than those of `s2`.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_2;
	unsigned char	*s2_2;

	s1_2 = (unsigned char *)s1;
	s2_2 = (unsigned char *)s2;
	i = 0;
	while ((i < n) && (s1_2[i] == s2_2[i]))
		i++;
	if (i == n)
		return (0);
	else
		return (s1_2[i] - s2_2[i]);
}
