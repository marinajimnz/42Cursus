/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:06:15 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:42 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//En la función del sistema se incluye la librería #include <ctype.h>
//The isalpha() function tests for any character for which isupper(3) or
//islower(3) is true.  The value of the argument must be representable as
//an unsigned char

#include "libft.h"

int	ft_isalpha(int num)
{
	return ((num >= 'A' && num <= 'Z')
		|| (num >= 'a' && num <= 'z'));
}
