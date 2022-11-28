/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:47:03 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:04:02 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strchr() function locates the first occurrence of c (converted to a
//char) in the string pointed to by s.  The terminating null character is
//considered to be part of the string; therefore if c is `\0', the func-
//tions locate the terminating `\0'.

//The strrchr() function is identical to strchr(), except it locates the
//last occurrence of c.

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (0);
}

// int	main(void)
// {
// 	const char	str[] = "Holaquetal";
// 	const char	ch = '\0';
// 	char		*ret;

// 	ret = ft_strchr(str, ch);
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	return (0);
// }
