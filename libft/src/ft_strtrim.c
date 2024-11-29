/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:40:41 by rmakoni           #+#    #+#             */
/*   Updated: 2024/11/27 14:47:38 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns 1 if they match and 0 if not
int	check_char(char c, char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/// @brief Removes leading and trailing characters from a set in a string.
///
/// This function trims the string `s1` by removing any characters found in
/// the `set` string from both the beginning and the end. The result is
/// stored in a new string, which is null-terminated.
///
/// @param s1 The string to trim.
/// @param set The set of characters to remove from the beginning and end
/// 		    of `s1`.
///
/// @return A new string with the specified characters removed, or NULL if
///         memory allocation fails.
char	*ft_strtrim(const char *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && check_char((char)s1[start], (char *)set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_char((char)s1[end - 1], (char *)set))
		end--;
	trimmed = ft_substr(s1, start, end - start);
	return (trimmed);
}
