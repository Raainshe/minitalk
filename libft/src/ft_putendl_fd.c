/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:54:54 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:59:11 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Writes a string followed by a newline to the specified file
///				descriptor.
///
/// This function writes the string `s` followed by a newline character to
/// the file or output stream represented by the file descriptor `fd`.
///
/// @param s The string to write. The function will write the entire string,
///          including a newline at the end.
/// @param fd The file descriptor where the string will be written. It could
///           represent standard output (1), standard error (2), etc.
void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
