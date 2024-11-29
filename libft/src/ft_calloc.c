/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryan <ryan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:58:12 by rmakoni           #+#    #+#             */
/*   Updated: 2024/11/26 23:44:40 by ryan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief It is used to allocate memory for an array
/// of elements, initialize all bytes in the allocated
/// storage to zero, and return a pointer to the memory.
/// @param num The number of elements to allocate.
/// @param size The size of each element in bytes.
/// @return The function returns a pointer to the
/// allocated memory, which is suitably aligned for
/// any built-in type. f the memory allocation fails,
/// it returns NULL.
void	*ft_calloc(size_t num, size_t size)
{
	char	*mem;

	mem = malloc(num * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, num * size);
	return (mem);
}
