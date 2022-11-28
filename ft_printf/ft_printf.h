/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:17:02 by marinjim          #+#    #+#             */
/*   Updated: 2022/11/17 12:34:10 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <xlocale.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *length);
void	ft_putstr(char *str, int *length);
void	ft_putnbrb(unsigned long long num, char *base, int *length);
void	ft_putnbr(int num, int *length);
void	ft_putnbr_unsigned(unsigned int num, int *length);

#endif