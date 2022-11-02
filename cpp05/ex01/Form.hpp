/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:45:38 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/01 18:31:23 by bboulhan         ###   ########.fr       */
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
		class gradeHigh : public std::exception{
            virtual const char* what() const throw(){
                return ("GradeTooHighException");   
            }
        };
        class gradeLow : public std::exception{
            virtual const char* what() const throw(){
                return ("GradeTooLowException");
            }
        };
		Form();
		Form(std::string name, int grade1, int grade2);
		Form(const Form &copy);
		~Form();
		Form &operator=(const Form &op);
		const std::string getName() const;
		const int getGradeSign() const;
		const int getGradeExecute() const;
		const bool getSign() const;
		void beSigned(const Bureaucrat &br);

};

std::ostream &operator<<(std::ostream &stream, const Form &op);

#endif