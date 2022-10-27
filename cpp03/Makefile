# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brahim <brahim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 12:32:02 by brahim            #+#    #+#              #
#    Updated: 2022/10/26 12:32:51 by brahim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp ClapTrap.cpp \

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

INC = ClapTrap.hpp \

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all