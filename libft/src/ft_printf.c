/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:41:11 by rmakoni           #+#    #+#             */
/*   Updated: 2024/11/27 14:58:26 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_per(void)
{
	int	count;

	count = write(1, "%", 1);
	return (count);
}

int	print_arg(char c, va_list args)
{
	int	temp;

	temp = 0;
	if (c == 'i' || c == 'd')
		temp = ft_putnbr_fdp(va_arg(args, int), 1);
	else if (c == 'u')
		temp = ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'c')
		temp = ft_putchar_fdp((char)va_arg(args, int), 1);
	else if (c == 's')
		temp = ft_putstr_fdp(va_arg(args, char *), 1);
	else if (c == 'x' || c == 'X')
		temp = ft_gethex((unsigned int)va_arg(args, int), c);
	else if (c == 'p')
		temp = ft_get_address(va_arg(args, void *));
	else if (c == '%')
		temp += print_per();
	else
		temp = -1;
	return (temp);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		temp;

	count = 0;
	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i] != '\0')
		{
			i++;
			temp = print_arg(str[i], args);
			i++;
		}
		else
			temp = write(1, &str[i++], 1);
		if (temp == -1)
			return (temp);
		else
			count += temp;
	}
	va_end(args);
	return (count);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	// printf("\n%d", printf("%u", -10));
// 	// return (0);
// 	i = ft_printf("%u", -10);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(i, 1);
// 	return (0);
// }
