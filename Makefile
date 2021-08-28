# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/05 17:38:34 by omimouni          #+#    #+#              #
#    Updated: 2021/08/28 11:50:18 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
SRCS	= $(wildcard src/*.c src/**/*.c)
OBJS	= $(subst src/,,$(addprefix build/, $(patsubst %.c,%.o, $(SRCS))))
FLAGS = -I./include -I./libft/include -D DEBUG=1

LIBFT = libs/libft.a

all: $(NAME)

clean:
	@rm -rf build/
	@make -C ./libft clean
	@echo "\033[1;31m> deleted all objects.\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(LIBFT)
	@make -C ./libft fclean
	@echo "\033[1;31m> deleted ./push_swap.\033[0m"

re: fclean all
	
build/%.o: src/%.c
	@mkdir -p $(dir $@)
	@gcc $(FLAGS) -c $< -o $@
	@echo "\033[1;35m  $@ compiled\033[0m"

$(NAME):  $(LIBFT) $(OBJS)
	@gcc $(OBJS)  $(LIBFT)  -fsanitize=address -o $(NAME)
	@echo "\033[0;32m\n> ./push_swap compiled.\033[0m"

$(LIBFT): 
	@make -sC ./libft
	@mkdir -p libs
	@cp libft/libft.a ./libs
	@echo "\033[0;33m> $(LIBFT) added to library.\033[0m"
	