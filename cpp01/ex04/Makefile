# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 18:19:30 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/07 18:19:32 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = File

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp File.cpp \

INC = File.hpp \

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

run:
	make re && ./$(NAME)

.PHONY : re fclean clean all