/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:54:45 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:04:27 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'm';
// 	printf("%c -> %c", c, ft_toupper(c));
// 	c = 'D';
// 	printf("\n%c -> %c", c, ft_toupper(c));
// 	c = '9';
// 	printf("\n%c -> %c", c, ft_toupper(c));
// 	return (0);
// }
