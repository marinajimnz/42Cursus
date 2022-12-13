/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:05:57 by marinjim          #+#    #+#             */
/*   Updated: 2022/12/13 18:51:26 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

unsigned long int	ft_strlen(const char *str);
char				*ft_strjoin(char *str1, const char *str2);
char				*ft_strchr(const char *str, int c);
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
	int		i;
	int		j;

	if (!str1 || !str2)
		return (NULL);
	string = malloc(((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof(char)));
	if (!string)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		string[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
		string[i++] = str2[j++];
	string[i] = '\0';
	free(str1);
	return (string);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)(str + i));
	return (NULL);
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
	char	*str;

	str = (char *)malloc(count * size);
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, (count * size));
	return ((void *) str);
}
