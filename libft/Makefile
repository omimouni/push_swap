# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 11:24:33 by omimouni          #+#    #+#              #
#    Updated: 2021/08/28 11:46:56 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(wildcard *.c src/**/*.c)
OBJS = $(subst src/,,$(addprefix build/, $(patsubst %.c, %.o, $(SRCS))))

all: $(NAME)

clean:
	@rm -rf build/

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[1;31m> $(NAME) library deleted.\033[0m"

re: fclean all

$(NAME): $(OBJS)
	@ar -rsc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "\033[0;33m> $(NAME) library compiled.\033[0m"

build/%.o: src/%.c
	@mkdir -p $(dir $@)
	@gcc -Wall -Werror -Wextra -c -I./include $< -o $@