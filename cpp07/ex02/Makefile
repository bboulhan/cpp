# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 16:15:20 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/14 11:10:19 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp \

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

INC = Array.hpp \

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all