/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:13:01 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:40 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//En la función del sistema se incluye la librería #include <ctype.h>
//The isalnum() function tests for any character for which isalpha(3) or
//isdigit(3) is true.  The value of the argument must be representable as
//an unsigned char.

#include "libft.h"

int	ft_isalnum(int num)
{
	return ((num >= 'A' && num <= 'Z')
		|| (num >= 'a' && num <= 'z') || (num >= '0' && num <= '9'));
}
