/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:12:36 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/04 17:32:35 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (*str != '\0' || f != (void *)0)
	{
		while (str[i] != '\0')
		{
			f(i, &str[i]);
			i++;
		}
	}
}
