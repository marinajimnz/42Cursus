# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 12:17:32 by marinjim          #+#    #+#              #
#    Updated: 2023/02/09 10:41:07 by marinjim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =
SERVER = server
CLIENT = client

LIBFT 		= ./libc/libft.a
LIBFT_ROOT 	= ./libc
PRINTF		= ./ft_printf/libftprintf.a
PRINTF_ROOT  = ./ft_printf

SRC_S	 = server.c
SRC_C	 = client.c

INCLUDE	 = -I. -I$(LIBFT_ROOT) -I$(LIBFT_ROOT)/stack \
				-I$(PRINTF_ROOT) -I$(PRINTF_ROOT)/stack \

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all: $(SERVER) $(CLIENT)

$(SERVER) : $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(SRC_S) $(LIBFT) $(PRINTF) $(INC) -o $(SERVER)

$(CLIENT) : $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(SRC_C) $(LIBFT) $(PRINTF) $(INC) -o $(CLIENT)

$(LIBFT) :
	$(MAKE) -C ./libc

$(PRINTF) :
	$(MAKE) -C ./ft_printf

clean:
	$(RM) $(SERVER) $(CLIENT)
fclean: clean
	$(RM) $(SERVER) $(CLIENT)
	$(MAKE) fclean -C $(LIBFT_ROOT)
	$(MAKE) fclean -C $(PRINTF_ROOT)
re: fclean all

.PHONY:	all clean fclean re