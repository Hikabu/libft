# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfedorov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 14:53:11 by vfedorov          #+#    #+#              #
#    Updated: 2023/01/20 17:25:54 by vfedorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME 	= libft.a
SRCS 	= $(wildcard *.c)
HEADER 	= libft.h
OBJ 	= $(SRCS:.c=.o)
CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror
.PHONY	: all clean fclean re

all		: 	$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME) : 	$(OBJ) 
	@ar r $(NAME) $(OBJ)


fclean	:	clean
	rm -f $(NAME)

clean	:
	 rm *.o

re		:	fclean all
