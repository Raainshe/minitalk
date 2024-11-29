/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:23:22 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 18:13:34 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/// @brief Locates the first occurrence of a character in a string.
///
/// This function searches the string `str` for the first occurrence of the
/// character `c` (treated as unsigned char). The search stops when `c` is
/// found or when the null terminator is reached.
///
/// @param str The string to search.
/// @param c The character to locate in the string.
///
/// @return A pointer to the first occurrence of `c` in `str`, or NULL if `c`
///         is not found.
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
