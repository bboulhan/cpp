# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 20:17:45 by bboulhan          #+#    #+#              #
#    Updated: 2022/10/19 15:46:02 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Zombie

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp \

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