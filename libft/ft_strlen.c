/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:22:20 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:04:14 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//En la función del sistema se incluye la librería #include <string.h>
#include "libft.h"

unsigned long int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
