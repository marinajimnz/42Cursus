/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:04:49 by marinjim          #+#    #+#             */
/*   Updated: 2022/11/17 12:25:38 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *length)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)", length);
		return ;
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i], length);
		i++;
	}
}
