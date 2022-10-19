# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 18:44:51 by bboulhan          #+#    #+#              #
#    Updated: 2022/10/18 15:45:33 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Phonebook

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = Phonebook.cpp Contact.cpp main.cpp \

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