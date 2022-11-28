/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:26:00 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:47 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//En la función del sistema se incluye la librería #include <ctype.h>
//The isprint() function tests for any printing character, including space
//(` ').  The value of the argument must be representable as an unsigned
//char

#include "libft.h"

int	ft_isprint(int num)
{
	return ((num >= 32 && num <= 126));
}
