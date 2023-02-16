/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:52:57 by marinjim          #+#    #+#             */
/*   Updated: 2023/02/16 14:50:46 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_to_binary(int pid, char c)
{
	int	bits;

	bits = 0;
	while (bits < 8)
	{
		if ((c & (1 << bits)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(200);
		bits++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		i;

	if (argc != 3)
	{
		ft_printf("%s", "\033[0;31mError, try: ./client + PID + 1arg\033[0m\n");
		exit(0);
	}
	else
	{
		pid = ft_atoi(argv[1]);
		i = 0;
		while (argv[2][i] != '\0')
		{
			ft_to_binary(pid, argv[2][i]);
			i++;
		}
	}
	return (0);
}
