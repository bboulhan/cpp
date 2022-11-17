# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 15:28:36 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/16 15:29:07 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp \

OBJS = $(FILES:.cpp=.o)

INC = MutantStack.hpp \

%.o : %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all