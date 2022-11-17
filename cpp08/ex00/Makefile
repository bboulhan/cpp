# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 09:53:32 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/16 15:29:11 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Easyfind

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp \

OBJS = $(FILES:.cpp=.o)

INC = easyfind.hpp \

%.o : %.cpp $(INC)
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