/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:43:14 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 18:20:50 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_count(char *src)
{
	size_t	i;

	i = 0;
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}

/// @brief Copies a string to another, ensuring null-termination.
///
/// This function copies up to `dst_size - 1` characters from the string `src`
/// to `dest`, and guarantees that `dst` is null-terminated. If the length of
/// `src` is greater than or equal to `dst_size`, the copied string will be
/// truncated, and the null terminator will be placed at the end of `dst`.
///
/// @param dest The destination buffer where the string will be copied.
/// @param src The source string to copy.
/// @param dst_size The size of the destination buffer, including space for the
///             null terminator.
///
/// @return The total length of the string it tried to create, i.e., the length
///         of `src`. If the return value is greater than or equal to
///         `dst_size`, truncation occurred.
size_t	ft_strlcpy(char *dest, const char *src, size_t dst_size)
{
	size_t	i;

	i = 0;
	if (dst_size > 0)
	{
		while ((src[i] != 0) && (dst_size - 1 > i))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (str_count((char *)src));
}
