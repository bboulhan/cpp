# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 17:35:56 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/12 11:03:19 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp Bureaucrat.cpp \

INC = Bureaucrat.hpp \

OBJS = $(FILES:.cpp=.o)

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