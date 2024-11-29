/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:12:31 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:14:09 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	reverse_print(char *snum, int len, int fd)
{
	len--;
	while (len >= 0)
	{
		write(fd, &snum[len], 1);
		len--;
	}
}

/// @brief Writes an integer to the specified file descriptor.
///
/// This function converts the integer `n` to its string representation and
/// writes it to the file or output stream represented by the file descriptor
/// `fd`. It does not include any newline characters.
///
/// @param n The integer to write.
/// @param fd The file descriptor where the integer will be written. It could
///           represent standard output (1), standard error (2), etc.
///
/// @return None.
void	ft_putnbr_fd(int n, int fd)
{
	char	snum[12];
	int		i;
	int		r;
	int		is_neg;

	is_neg = 0;
	i = 0;
	if (n == 0)
		snum[i++] = '0';
	if (n < 0)
		is_neg = 1;
	while (n != 0)
	{
		if (n < 0)
			r = (-1) * (n % 10);
		else
			r = n % 10;
		snum[i++] = r + '0';
		n = n / 10;
	}
	if (is_neg)
		snum[i++] = '-';
	snum[i] = '\0';
	reverse_print(snum, i, fd);
}
