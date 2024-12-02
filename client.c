/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:59:44 by rmakoni           #+#    #+#             */
/*   Updated: 2024/12/02 17:41:48 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_byte(pid_t pid, char c)
{
	int	i;
	int	bit;
	int	signal;

	i = 8;
	while (i--)
	{
		usleep(200);
		bit = (c >> i) & 1;
		if (bit == 0)
			signal = SIGUSR1;
		else
			signal = SIGUSR2;
		if (kill(pid, signal) == -1)
		{
			ft_printf("An error occured sending the signal!\n");
			exit(EXIT_FAILURE);
		}
	}
}

void	send_to_serv(pid_t pid, char *msg)
{
	int	i;

	i = 0;
	while (msg[i] != '\0')
	{
		send_byte(pid, msg[i]);
		i++;
	}
	send_byte(pid, '\0');
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	if (argc != 3)
	{
		ft_printf("Your parameters are incorrect!\n");
		exit(EXIT_FAILURE);
	}
	pid = (pid_t)ft_atoi(argv[1]);
	if (pid <= 0)
	{
		ft_printf("You entered an invalid PID");
		exit(EXIT_FAILURE);
	}
	send_to_serv(pid, argv[2]);
	return (0);
}
