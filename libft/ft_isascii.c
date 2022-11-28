/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:19:14 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:44 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//En la función del sistema se incluye la librería #include <ctype.h>
//The isascii() function tests for an ASCII character, which is any charac-
//ter between 0 and octal 0177 inclusive.

#include "libft.h"

int	ft_isascii(int num)
{
	return ((num >= 0 && num <= 127));
}
