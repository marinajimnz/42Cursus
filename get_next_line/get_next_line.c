/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:01:05 by marinjim          #+#    #+#             */
/*   Updated: 2022/12/02 18:27:00 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buf;
	char		*aux;
	static char	*ret;
	int			i;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	else
	{
		while (ft_strchr(aux, '\n') == 0)
		{
			buf = read(fd, buf, BUFFER_SIZE);
			aux = ft_strjoin(aux, buf);
		}
	}
	i = 0;
	while (aux[i] != '\n')
		i++;
	ret = (char *)malloc(((i + 1) * sizeof (char)) + 1);
	ft_memcpy(ret, aux, (i + 1));
	return (ret);
}
