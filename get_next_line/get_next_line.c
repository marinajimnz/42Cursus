/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:01:05 by marinjim          #+#    #+#             */
/*   Updated: 2022/12/08 15:35:06 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd);
char	*ft_read_line(int fd);
char	*ft_clean_aux(char *aux, char *ret);

char	*get_next_line(int fd)
{
	char		*aux;
	static char	*ret;
	int			i;

	i = 0;
	aux = ft_read_line(fd);
	while (aux[i] != '\n')
		i++;
	ret = (char *)malloc(((i + 1) * sizeof (char)) + 1);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, aux, (i + 1));
	aux = ft_clean_aux(aux, ret);
	return (ret);
}

char	*ft_read_line(int fd)
{
	char		*buf;
	char		*aux;

	buf = (char *)malloc(BUFFER_SIZE * sizeof(char));
	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (NULL);
	else
	{
		read(fd, buf, BUFFER_SIZE);
		aux = (char *)malloc(BUFFER_SIZE * sizeof(char));
		if (!aux)
			return (NULL);
		aux = ft_memcpy(aux, buf, BUFFER_SIZE);
		while (ft_strchr(aux, '\n') == 0)
		{
			read(fd, buf, BUFFER_SIZE);
			aux = ft_strjoin(aux, buf);
		}
	}
	free(buf);
	return (aux);
}

char	*ft_clean_aux(char *aux, char *ret)
{
	char	*new_aux;
	int		new_aux_length;
	int		i;
	int		j;

	new_aux_length = ft_strlen(aux) - ft_strlen(ret);
	new_aux = (char *) malloc(new_aux_length * sizeof (char) + 1);
	if (!new_aux)
		return (NULL);
	i = ft_strlen(ret);
	j = 0;
	while (aux[i] != '\0')
	{
		new_aux[j] = aux [i];
		i++;
		j++;
	}
	new_aux[j] = '\0';
	return (new_aux);
}
