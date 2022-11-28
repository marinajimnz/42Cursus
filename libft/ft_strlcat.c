/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:26:46 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/01 16:04:09 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strlcat() appends string src to the end of dst.  It will append at most
//dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless   
//dstsize is 0 or the original dst string was longer than dstsize (in prac-
//tice this should not happen as it means that either dstsize is incorrect
//or that dst is not a proper string).

//If the src and dst strings overlap, the behavior is undefined.

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dest_size)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < dest_size)
		i++;
	j = i;
	while (src[i - j] != '\0' && i + 1 < dest_size)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < dest_size)
		dest[i] = '\0';
	return (j + ft_strlen(src));
}

// int	main(void)
// {
// 	char	*string = "Holacaracola,quetal";
//     char	buffer[19] = "hey";
// 	int	ret;

// 	ret = ft_strlcat(buffer, string, 19);
// 	printf("Copied '%s' into '%s', length %d\n", string, buffer, ret);
// }
