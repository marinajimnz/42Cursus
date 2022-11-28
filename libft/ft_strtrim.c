/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:01:50 by mariniim          #+#    #+#             */
/*   Updated: 2022/10/04 15:29:49 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_position(char c, const char *to_find)
{
	unsigned int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (to_find[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *str, const char *to_find)
{
	char	*string;
	int		first;
	int		last;
	int		i;

	first = 0;
	while (str[first] != '\0' && ft_find_position(str[first], to_find) == 1)
		first++;
	last = ft_strlen(str);
	while (last > first && ft_find_position(str[last - 1], to_find) == 1)
		last--;
	string = (char *)malloc((last - first + 1) * (sizeof(char)));
	if (!string)
		return (NULL);
	i = 0;
	while (first < last)
	{
		string[i] = str[first];
		i++;
		first++;
	}
	string[i] = '\0';
	return (string);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*to_find;

// 	str = "lorem ipsum dolor sit amet";
// 	to_find = " ";
// 	printf("%s", ft_strtrim(str, "te"));
// 	return (0);
// }