/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:47:34 by marinjim          #+#    #+#             */
/*   Updated: 2023/02/16 13:10:20 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	handler_sigusr(int sig, siginfo_t *info, void *context)
{
	static int	bits = 0;
	static int	c = 0;
	static int	client_pid = 0;

	(void) context;
	if (info->si_pid != client_pid)
	{
		ft_printf("Client with PID: %d says...\n", info->si_pid);
		client_pid = info->si_pid;
	}
	if (sig == SIGUSR1)
		c = c | (0x01 << bits);
	bits++;
	if (bits == 8)
	{
		ft_printf("%c", c);
		bits = 0;
		c = 0;
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(int argc, char **argv)
{
	struct sigaction	action;
	int					pid;

	(void)argv;
	pid = getpid();
	if (argc != 1)
	{
		ft_printf("%s", "\033[0;31mError: num. of arguments must be 3\033[0m\n");
		return (0);
	}
	action.sa_handler = (void *) handler_sigusr;
	sigemptyset(&action.sa_mask);
	action.sa_flags = SA_SIGINFO | SA_NODEFER | SA_RESTART;
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
	ft_printf("\033[0;32mPID: %d\033[0m\n", pid);
	ft_printf("\033[0;36mHey client! You can now send me anything...\033[0m\n");
	while (argc == 1)
	{
		pause();
	}
	return (0);
}
