/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:06:57 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/18 16:24:59 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Joins two strings into a new string.
///
/// This function concatenates the strings `s1` and `s2` into a new string.
/// A new memory block is allocated to hold the combined result, which is
/// null-terminated. If memory allocation fails, NULL is returned.
///
/// @param s1 The first string to join.
/// @param s2 The second string to join.
///
/// @return A new string containing the concatenation of `s1` and `s2`, or
///         NULL if memory allocation fails.
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*joined;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	i = 0;
	joined = malloc(s1_len + s2_len + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined[i] = (char)s1[i];
		i++;
	}
	while (s2[i - s1_len])
	{
		joined[i] = (char)s2[i - s1_len];
		i++;
	}
	joined[i] = '\0';
	return (joined);
}
