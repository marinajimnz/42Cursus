# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 18:08:39 by marinjim          #+#    #+#              #
#    Updated: 2023/02/09 10:29:41 by marinjim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = ./ft_

OBJS = $(SRC:.c=.o)

SRC = ./ft_printf.c ./ft_putchar.c ./ft_putnbrb.c ./ft_putnbr_unsigned.c \
		./ft_putnbr.c ./ft_putstr.c 

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