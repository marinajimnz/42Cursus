/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:03:12 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:04:18 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strcmp() and strncmp() functions lexicographically compare the null-
//terminated strings s1 and s2.

//The strncmp() function compares not more than n characters.  Because
//strncmp() is designed for comparing strings rather than binary data,
//characters that appear after a `\0' character are not compared.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{	
	char				*str1;
	char				*str2;
	unsigned long int	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < num && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] == str2[i])
			i++;
		else
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	int	i; 

// 	i = ft_strcmp("holA", "hola");
// 	printf("%d", i);
// 	return (0);
// }
