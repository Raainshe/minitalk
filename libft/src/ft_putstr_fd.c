/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:50:39 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 11:53:42 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Writes a string to the specified file descriptor.
///
/// This function writes the string `s` to the file or output stream
/// represented by the file descriptor `fd`. It does not add a newline.
///
/// @param s The string to write. The function writes the entire string,
///          but does not append a newline at the end.
/// @param fd The file descriptor where the string will be written. It could
///           represent standard output (1), standard error (2), etc.
///
/// @return None.
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
