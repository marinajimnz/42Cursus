# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 12:17:32 by marinjim          #+#    #+#              #
#    Updated: 2023/02/16 13:12:47 by marinjim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =
SERVER = server
CLIENT = client

SERVER_B = server_bonus
CLIENT_B = client_bonus

LIBFT 		= ./libc/libft.a
LIBFT_ROOT 	= ./libc
PRINTF		= ./ft_printf/libftprintf.a
PRINTF_ROOT  = ./ft_printf

SRC_S	 = server.c
SRC_C	 = client.c

SRC_S_B	= server_bonus.c
SRC_C_B	= client_bonus.c

INCLUDE	 = -I. -I$(LIBFT_ROOT) -I$(LIBFT_ROOT)/stack \
				-I$(PRINTF_ROOT) -I$(PRINTF_ROOT)/stack \

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all: $(SERVER) $(CLIENT) $(SERVER_B) $(CLIENT_B)

$(SERVER) : $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(SRC_S) $(LIBFT) $(PRINTF) $(INC) -o $(SERVER)

$(CLIENT) : $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(SRC_C) $(LIBFT) $(PRINTF) $(INC) -o $(CLIENT)

$(SERVER_B) : $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(SRC_S_B) $(LIBFT) $(PRINTF) $(INC) -o $(SERVER_B)

$(CLIENT_B) : $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(SRC_C_B) $(LIBFT) $(PRINTF) $(INC) -o $(CLIENT_B)

$(LIBFT) :
	$(MAKE) -C ./libc

$(PRINTF) :
	$(MAKE) -C ./ft_printf

bonus: $(SERVER_B) $(CLIENT_B)
	ar crs $(SERVER_B) $(CLIENT_B)
clean:
	$(RM) $(SERVER) $(CLIENT)
fclean: clean
	$(RM) $(SERVER) $(CLIENT)
	$(MAKE) fclean -C $(LIBFT_ROOT)
	$(MAKE) fclean -C $(PRINTF_ROOT)
re: fclean all

.PHONY:	all clean fclean re