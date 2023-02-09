# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 18:08:39 by marinjim          #+#    #+#              #
#    Updated: 2023/02/09 15:32:05 by marinjim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = ./ft_atoi.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c \

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar crs $(NAME) $(OBJS)
	
clean:
	/bin/rm -f $(OBJS)
fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all

.PHONY:	all clean fclean re