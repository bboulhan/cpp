# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 14:23:43 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/09 18:02:02 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp Fixed.cpp \

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

INC = Fixed.hpp \

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all