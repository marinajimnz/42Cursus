/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:40:12 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:04:25 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The tolower() function converts an upper-case letter to the corresponding
//lower-case letter.  The argument must be representable as an unsigned
//char or the value of EOF.

//Although the tolower() function uses the current locale, the tolower_l()
//function may be passed a locale directly. See xlocale(3) for more infor-
//mation.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
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
