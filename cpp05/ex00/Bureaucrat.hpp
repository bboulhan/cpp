/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:51 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/12 18:05:33 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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
		void setGrade(int grade);
        int getGrade() const;
        void gradeUp();
        void gradeDown();

};

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &op);

#endif