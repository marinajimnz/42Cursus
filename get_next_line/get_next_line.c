/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:01:05 by marinjim          #+#    #+#             */
/*   Updated: 2022/12/12 17:34:07 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *aux);
void	*ft_ret_line(char *aux);
char	*ft_clean_aux(char *aux);
char	*ft_buf_to_aux(char *aux, char *buf);

char	*get_next_line(int fd)
{
	char	*aux;
	char	*ret;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	aux = NULL;
	aux = ft_read_line(fd, aux);
	if (!aux)
		return (NULL);
	ret = ft_ret_line(aux);
	aux = ft_clean_aux(aux);
	return (ret);
}

char	*ft_read_line(int fd, char *aux)
{
	char		*buf;
	int			check_read;

	if (!aux)
		aux = ft_calloc(1, sizeof(char));
	buf = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	check_read = 1;
	while (check_read > 0)
	{
		check_read = read(fd, buf, BUFFER_SIZE);
		if (check_read == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[check_read] = 0;
		aux = ft_strjoin(aux, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	free(buf);
	buf = NULL;
	return (aux);
}

void	*ft_ret_line(char *aux)
{
	char	*ret;
	int		i;

	i = 0;
	if (aux[i] == '\0')
		return (NULL);
	while (aux[i] != '\0' && aux[i] != '\n')
		i++;
	i++;
	ret = ft_calloc((i + 1), sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (aux[i] != '\0' && aux[i] != '\n')
	{
		ret[i] = aux[i];
		i++;
	}
	if (aux[i] != '\0' && aux[i] == '\n')
		ret[i++] = '\n';
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
	new_aux = ft_calloc(ft_strlen(aux) - i, (sizeof(char) + 1));
	if (!new_aux)
		return (NULL);
	i++;
	j = 0;
	while (aux[i] != '\0')
	{
		new_aux[j] = aux [i];
		i++;
		j++;
	}
	new_aux[j] = '\0';
	free(aux);
	return (new_aux);
}

char	*ft_buf_to_aux(char *aux, char *buf)
{
	char	*clean;

	clean = ft_strjoin(aux, buf);
	if (!clean)
		return (NULL);
	free(aux);
	return (clean);
}
