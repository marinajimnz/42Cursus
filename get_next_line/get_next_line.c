/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:01:05 by marinjim          #+#    #+#             */
/*   Updated: 2022/12/08 17:00:33 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *aux);
char	*ft_clean_aux(char *aux, char *ret);

char	*get_next_line(int fd)
{
	static char		*aux;
	char			*ret;
	int				i;

	i = 0;
	aux = ft_read_line(fd, aux);
	if (!aux)
		return (NULL);
	while (aux[i] != '\n')
		i++;
	ret = (char *)malloc(((i + 1) * sizeof (char)) + 1);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, aux, (i + 1));
	aux = ft_clean_aux(aux, ret);
	return (ret);
}

char	*ft_read_line(int fd, char *aux)
{
	char		*buf;
	int			check_read;

	if (!aux)
	{
		aux = (char *) malloc (1 * sizeof (char));
		aux[0] = '\0';
	}
	buf = (char *) malloc(BUFFER_SIZE + 1 * sizeof(char));
	if (!buf)
		return (NULL);
	check_read = 1;
	while (check_read > 0)
	{
		check_read = read(fd, buf, BUFFER_SIZE);
		if (check_read == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[check_read] = '\0';
		aux = ft_buf_to_aux(aux, buf);
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
