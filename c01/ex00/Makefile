# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 01:37:22 by tpoungla          #+#    #+#              #
#    Updated: 2024/01/29 14:55:06 by tpoungla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:.cpp=.o)

# %.o:%.c
# 	$(CC) $(CFLAGS) -c $< -o $@
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re