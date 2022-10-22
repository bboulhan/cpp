# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 13:58:49 by bboulhan          #+#    #+#              #
#    Updated: 2022/10/21 14:00:48 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Harl

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp Harl.cpp \

INC = Harl.hpp \

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
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