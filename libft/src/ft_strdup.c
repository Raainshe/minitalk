/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:27:40 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:13:24 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Duplicates a string by allocating memory for a new copy.
///
/// This function allocates memory for a new string and copies the content of
/// the string `str` into it. The new string is null-terminated. If memory
/// allocation fails, NULL is returned.
///
/// @param str The string to duplicate.
///
/// @return A pointer to the newly allocated string, or NULL if memory
///         allocation fails.
char	*ft_strdup(const char *str)
{
	size_t	s_len;
	size_t	i;
	char	*dup;

	s_len = ft_strlen((char *)str);
	dup = malloc(s_len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
