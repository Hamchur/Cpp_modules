# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamchur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 15:39:36 by hamchur           #+#    #+#              #
#    Updated: 2022/05/24 15:39:38 by hamchur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@echo "Create megaphone"
$(NAME): $(OBJS)
			clang++ $(FLAGS) -o $(NAME) $(OBJS)
		
.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
re:		fclean all

.PHONY: all clean fclean re