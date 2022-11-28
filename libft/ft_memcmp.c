/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:29:25 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:03:52 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memcmp() function compares byte string s1 against byte string s2.
//Both strings are assumed to be n bytes long.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t num)
{
	char				*str1;
	char				*str2;
	unsigned long int	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < num)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			i++;
		}
		else
			return ((unsigned char)*str1 - (unsigned char)*str2);
	}
	return (0);
}

// int main ()
// {
//   char buffer1[] = "DWGAOTP12DF0";
//   char buffer2[] = "DWgaOtP12df0";

//   int n;

//   n=ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );

//   if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
//   else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
//   else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

//   return 0;
// }