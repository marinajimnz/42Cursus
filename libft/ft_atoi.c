/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:25:36 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:27 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The atoi() function converts the initial portion of the string pointed to
//by str to int representation.

//It is equivalent to: (int)strtol(str, (char **)NULL, 10);

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	i;
	long int	sign;
	long int	num;

	i = 0;
	sign = 1;
	num = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	num *= sign;
	return (num);
}

// int	main(int argc, char **argv)
// {
//   if (argc == 2)
//   {
//      printf("%d", ft_atoi("     ++---+-3274hdeh27"));
//   }
//		return (0);
// }