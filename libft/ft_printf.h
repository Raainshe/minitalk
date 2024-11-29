/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:39:43 by rmakoni           #+#    #+#             */
/*   Updated: 2024/11/27 15:19:15 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr_fdp(int n, int fd);
int	ft_putchar_fdp(char c, int fd);
int	ft_putstr_fdp(char *s, int fd);
int	ft_toupperp(int c, char x);
int	ft_gethex(int num, char c);
int	ft_print_unsigned(unsigned int num);
int	ft_get_address(void *add);
#endif