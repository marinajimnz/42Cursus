/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:49:31 by marinjim          #+#    #+#             */
/*   Updated: 2022/11/17 12:31:43 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int num, int *length)
{
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
