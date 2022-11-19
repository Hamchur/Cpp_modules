# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamchur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 12:23:01 by hamchur           #+#    #+#              #
#    Updated: 2022/05/27 12:23:05 by hamchur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook 

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Contact.cpp PhoneBook.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@echo "Create phonebook"
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
