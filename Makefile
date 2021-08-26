# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/05 17:38:34 by omimouni          #+#    #+#              #
#    Updated: 2021/08/26 22:46:15 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
SRCS	= $(wildcard src/*.c src/**/*.c)
OBJS	= $(subst src/,,$(addprefix build/, $(patsubst %.c,%.o, $(SRCS))))
FLAGS = -I./inc -D DEBUG=1 -fsanitize=leak

all: $(NAME)

clean:
	rm -rf build/

fclean: clean
	rm -rf $(NAME)

re: fclean all
	
build/%.o: src/%.c
	@mkdir -p $(dir $@)
	@gcc $(FLAGS) -c $< -o $@
	@echo "$@ compiled"

$(NAME): $(OBJS)
	@gcc $(OBJS) -o $(NAME)
	@echo "\n./push_swap [numbers]"