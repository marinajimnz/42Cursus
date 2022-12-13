/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:01:05 by marinjim          #+#    #+#             */
/*   Updated: 2022/12/13 19:12:03 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *aux);
void	*ft_ret_line(char *aux);
char	*ft_clean_aux(char *aux);
void	*ft_free(char *aux, char *buf);

char	*get_next_line(int fd)
{
	static char	*aux[4242];
	char		*ret;

	if (fd < 0)
		return (NULL);
	aux[fd] = ft_read_line(fd, aux[fd]);
	if (!aux[fd])
		return (NULL);
	ret = ft_ret_line(aux[fd]);
	aux[fd] = ft_clean_aux(aux[fd]);
	return (ret);
}

char	*ft_read_line(int fd, char *aux)
{
	char		*buf;
	int			check_read;

	buf = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buf)
		return (NULL);
	check_read = 1;
	while (!ft_strchr(aux, '\n') && check_read != 0)
	{
		check_read = read(fd, buf, BUFFER_SIZE);
		if (check_read < '\0')
			return (ft_free(aux, buf));
		buf[check_read] = '\0';
		if (!aux)
			aux = ft_calloc(1, sizeof (char));
		aux = ft_strjoin(aux, buf);
	}
	free(buf);
	return (aux);
}

void	*ft_ret_line(char *aux)
{
	char	*ret;
	int		i;

	i = 0;
	if (!aux[i])
		return (NULL);
	while (aux[i] != '\0' && aux[i] != '\n')
		i++;
	i++;
	ret = ft_calloc((i + 1), sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (aux[i] != '\n' && aux[i] != '\0')
	{
		ret[i] = aux[i];
		i++;
	}
	if (aux[i] == '\n')
	{
		ret[i] = '\n';
		i++;
	}
	return (ret);
}

char	*ft_clean_aux(char *aux)
{
	char	*new_aux;
	int		i;
	int		j;

	i = 0;
	while (aux[i] != '\0' && aux[i] != '\n')
		i++;
	if (!aux[i])
	{
		free(aux);
		return (NULL);
	}
	new_aux = ft_calloc((ft_strlen(aux) - i + 1), (sizeof(char)));
	if (!new_aux)
		return (NULL);
	i++;
	j = 0;
	while (aux[i] != '\0')
	{
		new_aux[j] = aux[i];
		i++;
		j++;
	}
	free(aux);
	return (new_aux);
}

void	*ft_free(char *aux, char *buf)
{
	free(aux);
	free(buf);
	return (NULL);
}
