/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:09:29 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/05 13:06:48 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlength(long int num)
{
	int	count;

	count = 0;
	if (num <= 0)
		count++;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

void	ft_check(int *num, char *string)
{
	if (*num == -2147483648)
	{
		string[0] = '-';
		string[1] = '2';
		*num = 147483648;
	}
	if (*num < 0)
	{
		string[0] = '-';
		*num *= -1;
	}
}

char	*ft_itoa(int num)
{
	char	*string;
	int		length;

	length = ft_numlength(num);
	string = malloc((length + 1) * sizeof(char));
	if (!string)
		return (NULL);
	ft_check(&num, string);
	string[length] = '\0';
	if (num == 0)
		string[0] = '0';
	while (num != 0)
	{
		length--;
		string[length] = (num % 10) + '0';
		num /= 10;
	}
	return (string);
}

// int main(void)
// {
// 	int i;
// 	i = -2147483648;
// 	printf("%s", ft_itoa(i));
// 	return (0);
// }