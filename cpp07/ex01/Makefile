# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 14:23:11 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/16 14:44:03 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp \

OBJS = $(FILES:.cpp=.o)

INC = iter.hpp \

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