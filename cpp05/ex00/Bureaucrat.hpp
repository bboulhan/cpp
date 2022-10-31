/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:51 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/31 19:18:15 by bboulhan         ###   ########.fr       */
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
		Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat& op);
        Bureaucrat(const Bureaucrat &copy);
        const std::string getName() const;
        int getGrade() const;
        void gradeUp();
        void gradeDown();
};

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &op);

#endif