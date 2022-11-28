/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:11:20 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:45 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//En la función del sistema se incluye la librería #include <ctype.h>
//The isdigit() function tests for a decimal digit character.

#include "libft.h"

int	ft_isdigit(int num)
{
	return ((num >= '0' && num <= '9'));
}
