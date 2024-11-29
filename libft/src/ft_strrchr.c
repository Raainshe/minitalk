/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:21:00 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:23:54 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Locates the last occurrence of a character in a string.
///
/// This function searches the string `str` for the last occurrence of the
/// character `c` (treated as unsigned char). The search starts from the
/// end of the string and moves backward.
///
/// @param str The string to search.
/// @param c The character to locate in the string.
///
/// @return A pointer to the last occurrence of `c` in `str`, or NULL if
///         `c` is not found.
char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}
