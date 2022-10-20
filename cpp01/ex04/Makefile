# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 10:55:14 by bboulhan          #+#    #+#              #
#    Updated: 2022/10/20 13:09:05 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  main

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp File.cpp \

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

run:
	make re && ./$(NAME)

.PHONY : re fclean clean all