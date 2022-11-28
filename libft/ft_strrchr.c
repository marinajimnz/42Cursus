/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:52:18 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:04:22 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strchr() function locates the first occurrence of c (converted to a
//char) in the string pointed to by s.  The terminating null character is
//considered to be part of the string; therefore if c is `\0', the func-
//tions locate the terminating `\0'.

//The strrchr() function is identical to strchr(), except it locates the
//last occurrence of c.

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*string;

	i = 0;
	string = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			string = (char *)(str + i);
		i++;
	}
	if (str[i] == (char)c)
		string = (char *)(str + i);
	return (string);
}

// int	main(void)
// {
// 	const char	str[] = "Holaquetal";
// 	const char	ch = 'H';
// 	char		*ret;

// 	ret = ft_strrchr(str, ch);
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	return (0);
// }
