# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 17:51:29 by bboulhan          #+#    #+#              #
#    Updated: 2022/10/19 20:09:53 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  main

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp \

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

.PHONY : re fclean clean all