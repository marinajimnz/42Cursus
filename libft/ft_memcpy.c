/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:31:50 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:56 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memcpy() function copies n bytes from memory area src to memory area
//dst.  If dst and src overlap, behavior is undefined.  Applications in
//which dst and src might overlap should use memmove(3) instead.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char				*d;
	char				*s;

	d = (char *) dest;
	s = (char *) src;
	if (num == 0 || s == d)
		return (dest);
	while (num > 0)
	{
		*d = *s;
		d++;
		s++;
		num--;
	}
	return (dest);
}
