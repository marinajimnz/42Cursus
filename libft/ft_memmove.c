/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:31:42 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:58 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memmove() function copies len bytes from string src to string dst.
//The two strings may overlap; the copy is always done in a non-destructive
//manner.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	char	*aux_dest;
	char	*aux_src;
	int		i;

	aux_dest = (char *) dest;
	aux_src = (char *) src;
	i = 0;
	if (dest == src)
		return (dest);
	if (aux_src < aux_dest)
	{
		while (num--)
		{
			aux_dest[num] = aux_src[num];
		}
	}
	else
	{
		while (num--)
		{
			aux_dest[i] = aux_src[i];
			i++;
		}
	}
	return (dest);
}
