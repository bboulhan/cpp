# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 12:32:02 by brahim            #+#    #+#              #
#    Updated: 2022/11/11 11:47:39 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp ClapTrap.cpp ScavTrap.cpp \

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

INC = ClapTrap.hpp ScavTrap.hpp \

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all