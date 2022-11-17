# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 18:44:51 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/07 11:05:50 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Phonebook

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = Phonebook.cpp Contact.cpp main.cpp \

HEADER = Contact.hpp Phonebook.hpp \

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