/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:39:20 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 11:49:37 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Writes a character to the specified file descriptor.
///
/// This function writes the character `c` to the file or output stream
/// represented by the file descriptor `fd`. It does not add a newline.
///
/// @param c The character to write.
/// @param fd The file descriptor where the character will be written. It
///           could represent standard output (1), standard error (2), etc.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
