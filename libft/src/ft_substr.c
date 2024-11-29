/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:12:12 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:12:51 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Extracts a substring from a string.
///
/// This function creates a new string starting from the index `start`
/// in the string `s` and extracts `len` characters. The result is
/// null-terminated. If `start` is out of range, or if memory allocation
/// fails, it returns NULL.
///
/// @param s The string to extract the substring from.
/// @param start The starting index in the string `s`.
/// @param len The maximum number of characters to include in the substring.
///
/// @return A new string containing the extracted substring, or NULL if
///         memory allocation fails or `start` is out of range.
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen((char *)s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
