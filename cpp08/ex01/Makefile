# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 10:36:32 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/16 11:31:02 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp Span.cpp \

OBJS = $(FILES:.cpp=.o)

INC = Span.hpp \

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