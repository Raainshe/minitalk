/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gethex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:33:16 by rmakoni           #+#    #+#             */
/*   Updated: 2024/11/27 15:01:29 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	reverse_print2(char *snum, int len, int fd)
{
	int	count;
	int	temp;

	count = 0;
	len--;
	while (len >= 0)
	{
		temp = write(fd, &snum[len], 1);
		if (temp == -1)
			return (temp);
		count += temp;
		len--;
	}
	return (count);
}

char	gethex_letter(int num, char c)
{
	if (num == 10)
		return (ft_toupperp('a', c));
	else if (num == 11)
		return (ft_toupperp('b', c));
	else if (num == 12)
		return (ft_toupperp('c', c));
	else if (num == 13)
		return (ft_toupperp('d', c));
	else if (num == 14)
		return (ft_toupperp('e', c));
	else
		return (ft_toupperp('f', c));
}

int	ft_gethex(int number, char c)
{
	int				r;
	int				i;
	char			hex[100];
	unsigned int	num;

	num = (unsigned int)number;
	i = 0;
	if (num == 0)
	{
		hex[0] = '0';
		hex[1] = '\0';
		return (reverse_print2(hex, 1, 1));
	}
	while (num != 0)
	{
		r = num % 16;
		if (r < 10)
			hex[i++] = r + '0';
		else
			hex[i++] = gethex_letter(r, c);
		num /= 16;
	}
	hex[i] = '\0';
	return (reverse_print2(hex, i, 1));
}
