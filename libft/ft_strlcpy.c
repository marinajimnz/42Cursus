/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:27:54 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:04:13 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strlcpy() copies up to dstsize - 1 characters from the string src to dst,
//NUL-terminating the result if dstsize is not 0.

#include "libft.h"

size_t	ft_strlcpy(char *dest,
	const char *src, size_t dest_size)
{
	unsigned long int	i;

	i = 0;
	if (dest_size > 0)
	{
		while (src[i] != '\0' && i < dest_size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main (void)
// {
// 	char *string = "Holacaracola,quetal";
//     char buffer[19];
// 	int ret;

// 	ret = ft_strlcpy(buffer, string, 19);
// 	printf("Copied '%s' into '%s', length %d\n", string, buffer, ret);
// }