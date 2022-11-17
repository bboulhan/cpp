/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:45:38 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/13 11:48:11 by bboulhan         ###   ########.fr       */
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
		Form();
		Form(std::string name, int grade1, int grade2);
		Form(const Form &copy);
		~Form();
		Form &operator=(const Form &op);
		std::string getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool getSign() const;
		void setSign(bool sign);
		void beSigned(Bureaucrat &br);

};

std::ostream &operator<<(std::ostream &stream, const Form &op);

#endif