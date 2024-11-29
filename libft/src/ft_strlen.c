/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:59:04 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 13:21:40 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Computes the length of a null-terminated string.
///
/// This function calculates the number of characters in the string `c` up to
/// (but not including) the null terminator. It does not include the null
/// terminator in the count.
///
/// @param c The string whose length is to be calculated.
///
/// @return The number of characters in the string `c` excluding the null
///         terminator.
size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
