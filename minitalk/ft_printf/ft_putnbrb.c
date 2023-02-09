/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:34:52 by marinjim          #+#    #+#             */
/*   Updated: 2022/11/17 12:35:21 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrb(unsigned long long num, char *base, int *length)
{
	if (num < 16)
		ft_putchar(base[num], length);
	else
	{
		ft_putnbrb((num / 16), base, length);
		ft_putnbrb((num % 16), base, length);
	}
}
