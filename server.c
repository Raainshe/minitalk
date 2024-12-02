/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:58:27 by rmakoni           #+#    #+#             */
/*   Updated: 2024/12/02 17:17:24 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_error(void)
{
	ft_printf("An error occured receiving the signal!");
	exit(EXIT_FAILURE);
}

void	decode_sig(int sig, siginfo_t *info, void *context)
{
	static char	byte = 0;
	static int	count = 0;

	(void)context;
	(void)info;
	if (sig == SIGUSR1)
		byte = (byte << 1) | 0;
	else
		byte = (byte << 1) | 1;
	count++;
	if (count == 8)
	{
		write(1, &byte, 1);
		if (byte == '\0')
			ft_printf("\n");
		count = 0;
		byte = 0;
	}
}

int	main(void)
{
	struct sigaction	sigact;
	pid_t				pid;

	pid = getpid();
	ft_printf("PID: %d\n", pid);
	ft_printf("Waiting for signal :)\n");
	sigact.sa_sigaction = decode_sig;
	sigact.sa_flags = SA_SIGINFO | SA_RESTART;
	sigemptyset(&sigact.sa_mask);
	if (sigaction(SIGUSR1, &sigact, NULL) == -1)
		sig_error();
	if (sigaction(SIGUSR2, &sigact, NULL) == -1)
		sig_error();
	while (1)
		pause();
	return (0);
}
