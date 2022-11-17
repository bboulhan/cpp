/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:51 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/12 18:03:20 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string name;
		int grade;
	public:
        class GradeTooHighException : public std::exception{
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            virtual const char* what() const throw();
        };
		Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat& op);
        Bureaucrat(const Bureaucrat &copy);
        const std::string getName() const;
        int getGrade() const;
		void setGrade(int grade);
        void gradeUp();
        void gradeDown();
        void signForm(Form &fm);
};

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &op);

#endif