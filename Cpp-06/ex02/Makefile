# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 15:55:27 by hamchur           #+#    #+#              #
#    Updated: 2022/08/24 17:11:09 by hamchur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Idenfity

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@echo "Create"
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
