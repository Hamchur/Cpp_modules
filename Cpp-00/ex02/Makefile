# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamchur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 17:35:02 by hamchur           #+#    #+#              #
#    Updated: 2022/06/03 17:35:09 by hamchur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Account.cpp test.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@echo "Create account"
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
