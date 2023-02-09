/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:47:34 by marinjim          #+#    #+#             */
/*   Updated: 2023/02/09 15:02:50 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler_sigusr(int sig)
{
	static int	bits = 0;
	static int	c = 0;

	if (sig == SIGUSR1)
		c = c | (0x01 << bits);
	bits++;
	if (bits == 8)
	{
		ft_printf("%c", c);
		bits = 0;
		c = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	pid = getpid();
	if (argc != 1)
	{
		ft_printf("%s", "\033[0;31mError, try: ./client + PID + 1arg\033[0m\n");
		return (0);
	}
	ft_printf("\033[0;32mPID: %d\033[0m\n", pid);
	ft_printf("\033[0;36mWaiting for a message from client...\033[0m\n");
	signal(SIGUSR1, handler_sigusr);
	signal(SIGUSR2, handler_sigusr);
	while (argc == 1)
	{
		pause();
	}
	return (0);
}
