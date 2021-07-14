# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/10 01:53:59 by omimouni          #+#    #+#              #
#    Updated: 2021/07/13 18:43:22 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

GCC		= @/usr/bin/env gcc
GCCFLAGS = -Wall -Werror -Wextra -Iincludes

RM		= @/usr/bin/env rm

SRCS 	= $(wildcard *.c)

$(NAME): $(SRCS)
	$(GCC) $(GCCFLAGS) $(SRCS) -o $(NAME)
	
all: $(NAME)

clean:
	$(RM) -rf $(NAME)

fclean: clean

re: fclean all