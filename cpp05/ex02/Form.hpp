/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:45:38 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/13 13:12:36 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string name;
		bool sign;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		class GradeTooHighException : public std::exception{
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            virtual const char* what() const throw();
        };
		class notSigned : public std::exception{
			virtual const char* what() const throw();
		};
		Form();
		Form(std::string name, int grade1, int grade2);
		Form(const Form &copy);
		~Form();
		Form &operator=(const Form &op);
		std::string getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool getSign() const;
		void beSigned(Bureaucrat &br);
		virtual void execute(Bureaucrat const &executor)const = 0;

};

std::ostream &operator<<(std::ostream &stream, const Form &op);

#endif