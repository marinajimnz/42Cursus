/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:49:31 by marinjim          #+#    #+#             */
/*   Updated: 2022/11/17 11:40:42 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *length)
{
	if (num == -2147483648)
	{
		ft_putchar('-', length);
		ft_putchar('2', length);
		num = 147483648;
	}
	if (num < 0)
	{
		num = -num;
		ft_putchar('-', length);
	}
	if (num > 9)
	{
		ft_putnbr(num / 10, length);
		ft_putnbr(num % 10, length);
	}
	else
	{
		ft_putchar(num + '0', length);
	}
}
