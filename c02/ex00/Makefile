# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2024-03-22 14:59:17 by tpoungla          #+#    #+#             #
#   Updated: 2024-03-22 14:59:17 by tpoungla         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = a.out

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = main.cpp Fixed.cpp
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