# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 17:35:56 by bboulhan          #+#    #+#              #
#    Updated: 2022/11/12 16:02:32 by bboulhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Intern

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp \

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

INC = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp \
	  ShrubberyCreationForm.hpp RobotomyRequestForm.hpp Intern.hpp \

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all