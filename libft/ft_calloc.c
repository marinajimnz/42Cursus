/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:21:39 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:38 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The calloc() function contiguously allocates enough space for count
//objects that are size bytes of memory each and returns a pointer to the
//allocated memory.  The allocated memory is filled with bytes of value
//zero.

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = (void *)malloc(count * size);
	if (str == NULL || size < 0)
	{
		return (NULL);
	}
	ft_bzero(str, (count * size));
	return (str);
}
