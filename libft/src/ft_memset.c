/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:56:36 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/18 16:22:28 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Sets a block of memory to a specified value.
///
/// This function fills the first `len` bytes of the memory area `str` with the
/// constant byte `c`. The byte is interpreted as an unsigned char.
///
/// @param str A pointer to the memory block to set.
/// @param c The value to set each byte of the memory block to. It is passed as
///          an int, but is converted to an unsigned char.
/// @param len The number of bytes to set in the memory block.
///
/// @return A pointer to the memory block `str`.
void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*str2;

	i = 0;
	str2 = (unsigned char *)str;
	while (i < len)
	{
		str2[i] = (unsigned char)c;
		i++;
	}
	return (str2);
}
