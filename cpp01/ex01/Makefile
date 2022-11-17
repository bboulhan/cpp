# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 18:42:59 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/07 15:35:09 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Zombie

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp zombieHorde.cpp Zombie.cpp \

HEADER = Zombie.hpp \

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all