/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:05:50 by marinjim          #+#    #+#             */
/*   Updated: 2022/12/13 19:08:53 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

char				*get_next_line(int fd);
char				*ft_read_line(int fd, char *aux);
void				*ft_ret_line(char *aux);
char				*ft_clean_aux(char *aux);
void				*ft_free(char *aux, char *buf);
unsigned long int	ft_strlen(const char *str);
char				*ft_strjoin(char *str1, const char *str2);
char				*ft_strchr(const char *str, int c);
void				ft_bzero(void *str, size_t size);
void				*ft_calloc(size_t count, size_t size);

#endif