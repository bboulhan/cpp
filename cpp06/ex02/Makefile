# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 19:06:11 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/15 19:08:56 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp \

INC = main.hpp \

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
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