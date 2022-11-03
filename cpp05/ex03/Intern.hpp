/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:45:21 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/03 16:55:54 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



class Intern{
	private:
		std::string *table;
	public:
		class notFound : public std::exception{
			virtual const char* what() const throw();
		};
		Intern();
		Intern(const Intern &copy);
		~Intern();
		Intern &operator=(const Intern &op);
		Form *makeForm(std::string form,std::string target);
		Form *creatShrubbery(std::string target);
		Form *creatRobotomy(std::string target);
		Form *creatPresidential(std::string target);
		int Search(std::string form);
};


#endif