# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 17:51:29 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/07 16:36:57 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Weapon

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp \

INC = Weapon.hpp HumanA.hpp HumanB.hpp \

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all