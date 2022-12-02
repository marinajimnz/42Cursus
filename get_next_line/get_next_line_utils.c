/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:05:57 by marinjim          #+#    #+#             */
/*   Updated: 2022/12/02 16:29:06 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned long int	ft_strlen(const char *str);
char				*ft_strjoin(const char *str1, const char *str2);
int					*ft_strchr(const char *str, int c);
void				*ft_memcpy(void *dest, const void *src, size_t num);
void				*free_line(char *line);

unsigned long int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

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

int	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return (1);
		str++;
	}
	if ((char)c == '\0')
		return (1);
	return (0);
}

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char	*d;
	char	*s;

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
