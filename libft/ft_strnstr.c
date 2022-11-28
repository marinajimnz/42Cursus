/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:39:15 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:04:20 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t num)
{
	unsigned long int	i;

	i = 0;
	if (*str2 == '\0')
		return ((char *)str1);
	i = ft_strlen((char *)str2);
	while (*str1 != '\0' && num >= i)
	{
		if (*str1 == *str2 && ft_memcmp(str1, str2, i) == 0)
			return ((char *)str1);
		str1++;
		num--;
	}
	return (NULL);
}
