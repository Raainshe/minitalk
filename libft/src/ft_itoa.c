/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:56:58 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 16:09:09 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

/// @brief stands for "integer to ASCII." It converts an integer value to
/// a null-terminated string
/// @param n The integer value to be converted
/// @return The function returns a pointer to the resulting
/// null-terminated string,
char	*ft_itoa(int n)
{
	long	i;
	long	r;
	char	*num;

	i = get_num_len(n);
	num = malloc(i + 1);
	if (!num)
		return (NULL);
	num[i--] = '\0';
	r = n;
	if (n < 0)
		r = -r;
	while (i >= 0)
	{
		num[i--] = (r % 10) + '0';
		r = r / 10;
		if (r == 0 && n <= 0)
			break ;
	}
	if (n < 0)
		num[0] = '-';
	else if (n == 0)
		num[0] = '0';
	return (num);
}
