/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fdp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:50:39 by rmakoni           #+#    #+#             */
/*   Updated: 2024/11/27 15:04:02 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fdp(char *s, int fd)
{
	int	i;
	int	count;
	int	temp;

	i = 0;
	if (s == NULL)
	{
		s = "(null)";
	}
	count = 0;
	while (s[i] != '\0')
	{
		temp = write(fd, &s[i], 1);
		if (temp == -1)
			return (temp);
		count += temp;
		i++;
	}
	return (count);
}
