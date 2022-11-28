# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 18:08:39 by marinjim          #+#    #+#              #
#    Updated: 2022/10/12 17:32:09 by marinjim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = ./ft_bzero.c ./ft_isalnum.c ./ft_isalpha.c \
		./ft_isdigit.c ./ft_isascii.c \
		./ft_strlen.c ./ft_isprint.c \
		./ft_memset.c ./ft_toupper.c ./ft_tolower.c \
		./ft_strchr.c ./ft_strrchr.c ./ft_memchr.c \
		./ft_memcmp.c ./ft_atoi.c ./ft_strlcpy.c ./ft_strlcat.c \
		./ft_strncmp.c ./ft_calloc.c ./ft_memcpy.c ./ft_strdup.c \
		./ft_memmove.c ./ft_strnstr.c ./ft_substr.c ./ft_strtrim.c \
		./ft_strjoin.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		./ft_putendl_fd.c ./ft_striteri.c ./ft_strmapi.c ./ft_itoa.c \
		./ft_split.c

SRC_B = ./ft_lstnew_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstsize_bonus.c ./ft_lstlast_bonus.c \
		./ft_lstadd_back_bonus.c ./ft_lstdelone_bonus.c ./ft_lstclear_bonus.c ./ft_lstiter_bonus.c \
		./ft_lstmap_bonus.c

OBJS = $(SRC:.c=.o)

OBJS_B = $(SRC_B:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar crs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_B)
	ar crs $(NAME) $(OBJS) $(OBJS_B)
	
clean:
	/bin/rm -f $(OBJS) $(OBJS_B)
fclean: clean
	/bin/rm -f $(NAME) bonus
	
re: fclean all

.PHONY:	all bonus clean fclean re