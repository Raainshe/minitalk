/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:15:55 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:15:15 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Locates the first occurrence of a byte in a block of memory.
///
/// This function searches the memory block `ptr` for the first occurrence of
/// the byte `c` (treated as unsigned char). The search is performed up to
/// `num` bytes. If the byte is found, a pointer to it is returned; otherwise,
/// NULL is returned.
///
/// @param ptr A pointer to the memory block to search.
/// @param c The byte to search for in the memory block.
/// @param num The number of bytes to examine in the memory block.
///
/// @return A pointer to the first occurrence of `c` in `ptr`, or NULL if
///         `c` is not found within the first `num` bytes.
void	*ft_memchr(const void *ptr, int c, size_t num)
{
	unsigned char	value;
	unsigned char	*ptr2;
	size_t			i;

	value = (unsigned char)c;
	ptr2 = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		if (ptr2[i] == value)
			return ((void *)&ptr2[i]);
		i++;
	}
	return (NULL);
}
