/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:28:55 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:50 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memchr() function locates the first occurrence of c (converted to an
//unsigned char) in string s.

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t num)
{
	unsigned char		*string;
	unsigned char		ch;
	unsigned long int	i;

	string = (unsigned char *)str;
	ch = (unsigned char)c;
	i = 0;
	while (i < num)
	{
		if (*string != ch)
		{
			i++;
			string++;
		}
		else
			return ((void *)&str[i]);
	}
	return (NULL);
}

// int main (void) 
// {
//    const char str[] = "holacaracola.quetal";
//    const char ch = '.';
//    char *ret;

//    ret = memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }