/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:21:58 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/04 12:04:38 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*string;
	int		length1;
	int		length2;
	int		i;

	length1 = ft_strlen(str1);
	length2 = ft_strlen(str2);
	string = (char *)malloc(((length1 + length2) * sizeof(char)) + 1);
	if (!string)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		string[i] = str1[i];
		i++;
	}
	while (*str2 != '\0')
	{
		string[i] = *str2;
		i++;
		str2++;
	}
	string[i] = '\0';
	return (string);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "lorem ipsum";
// 	str2 = "dolor sit amet";
// 	printf("%s", ft_strjoin(str1, str2));
// 	return (0);
// }
