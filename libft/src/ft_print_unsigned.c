/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:11:20 by rmakoni           #+#    #+#             */
/*   Updated: 2024/11/07 11:25:09 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int num)
{
	char	snum[11];
	int		i;

	if (num == 0)
		return (write(1, "0", 1));
	i = 10;
	snum[i] = '\0';
	while (num > 0)
	{
		snum[--i] = (num % 10) + '0';
		num /= 10;
	}
	return (write(1, &snum[i], 11 - i - 1));
}
