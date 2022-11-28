/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:57:13 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:31 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//En la función del sistema se incluye la librería #include <strings.h>
//The bzero() function writes n zeroed bytes to the string s.  If n is
//zero, bzero() does nothing.

#include "libft.h"

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

// int	main(void)
// {
// 	char str[25] = "Hola caracola";
// 	ft_bzero(str, 4 * sizeof (char));
// 	write(1, ft_bzero((void)str, 4 * sizeof (char)), 4);
// 	write(1, bzero(str, 4 * sizeof (char)), 4);
// 	return (0);
// }
