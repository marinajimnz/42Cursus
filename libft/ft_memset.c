/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:31:29 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:04:00 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//En la función del sistema se incluye la librería #include <string.h>
//int num es el valor que se pasa posteriormente como caracter ascii
//también se le puede pasar el parámetro entre ' '

#include "libft.h"

void	*ft_memset(void *str, int num, size_t size)
{
	unsigned long int	i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)str)[i] = (unsigned char)num;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[25] = "Hola caracola";

// 	write(1, ft_memset(str, 122, 4 * sizeof (char)), 4);
// 	write(1, memset(str, 122, 4 * sizeof (char)), 4);
// 	return (0);
// }
