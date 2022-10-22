# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 04:38:20 by bboulhan          #+#    #+#              #
#    Updated: 2022/10/22 17:57:23 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  harlFilter

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