/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:34:08 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/04 17:38:50 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	int		i;
	char	*string;

	i = 0;
	string = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!string)
		return (NULL);
	if (*str != '\0' || f != (void *)0)
	{
		while (str[i] != '\0')
		{
			string[i] = f(i, str[i]);
			i++;
		}
	}
	string[i] = '\0';
	return (string);
}
