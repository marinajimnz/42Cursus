/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:17:02 by marinjim          #+#    #+#             */
/*   Updated: 2022/10/12 17:03:30 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <xlocale.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
void				ft_bzero(void *str, size_t size);
int					ft_isalnum(int num);
int					ft_isalpha(int num);
int					ft_isascii(int num);
int					ft_isdigit(int num);
int					ft_isprint(int num);
void				*ft_memset(void *str, int num, size_t size);
unsigned long int	ft_strlen(const char *str);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
void				*ft_memchr(const void *str, int c, size_t num);
int					ft_memcmp(const void *s1, const void *s2, size_t num);
int					ft_atoi(const char *str);
size_t				ft_strlcpy(char *dest, const char *src, size_t dest_size);
size_t				ft_strlcat(char *dest, char *src, size_t dest_size);
int					ft_strncmp(const char *s1, const char *s2, size_t num);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t num);
char				*ft_strdup(const char *str);
void				*ft_memmove(void *dest, const void *src, size_t num);
char				*ft_strnstr(const char *str1, const char *str2, size_t num);
char				*ft_substr(const char *str, unsigned int start, size_t len);
char				*ft_strtrim(char const *str, char const *to_find);
char				*ft_strjoin(const char *str1, const char *str2);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int num, int fd);
void				ft_putstr_fd(char *str, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_striteri(char *str, void (*f)(unsigned int, char*));
char				*ft_strmapi(const char *str, char (*f)(unsigned int, char));
char				*ft_itoa(int num);
char				**ft_split(char const *str, char c);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif