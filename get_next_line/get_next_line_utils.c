/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:05:57 by marinjim          #+#    #+#             */
/*   Updated: 2022/12/12 17:21:23 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned long int	ft_strlen(const char *str);
char				*ft_strjoin(char *str1, const char *str2);
int					ft_strchr(const char *str, int c);
void				ft_bzero(void *str, size_t size);
void				*ft_calloc(size_t count, size_t size);

unsigned long int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strjoin(char *str1, const char *str2)
{
	char	*string;
	int		length1;
	int		length2;
	int		i;
	int		j;

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
	j = -1;
	while (str2[++j] != '\0')
		string[i + j] = str2[j];
	string[i + j] = '\0';
	return (string);
}

int	ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (1);
		i++;
	}
	if ((char)c == '\0')
		return (1);
	return (0);
}

void	ft_bzero(void *str, size_t size)
{
	unsigned long int		i;
	char					*aux;

	aux = (char *)str;
	i = 0;
	while (i < size)
	{
		aux[i] = '\0';
		i++;
	}
}

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
