/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:59:34 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/18 16:21:15 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Appends a string to another, ensuring null-termination.
///
/// This function appends the string `src` to the string `dest`, ensuring
/// that the total length of the resulting string does not exceed `size - 1`.
/// It always null-terminates the result, provided there is enough space.
///
/// @param dest The destination string to append to.
/// @param src The source string to append.
/// @param dest_size The size of the destination buffer, including space for
///                  the null terminator.
///
/// @return The total length of the string it tried to create, i.e., the
///         initial length of `dst` plus the length of `src`.
size_t	ft_strlcat(char *dest, char *src, size_t dest_size)
{
	size_t	i;
	size_t	s_len;
	size_t	d_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (dest_size <= d_len)
		return (dest_size + s_len);
	i = 0;
	while (src[i] && i < dest_size - d_len - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	if (i < dest_size - d_len - 1)
		dest[d_len + i] = '\0';
	else if (dest_size > 0)
		dest[dest_size - 1] = '\0';
	return (d_len + s_len);
}
