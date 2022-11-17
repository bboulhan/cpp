/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:59 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/13 13:47:50 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* robo;
		Form *pr;
		Form *sh;
		
		robo = someRandomIntern.makeForm("robotomy request", "Bender");
		sh = someRandomIntern.makeForm("shrubbery creation", "Bender 2");
		pr = someRandomIntern.makeForm("presidential pardon", "Bender 3");
		
		Bureaucrat br1("Bureaucrat 1", 4);
		Bureaucrat br2("Bureaucrat 2", 70);

		std::cout << br1 << std::endl;
		std::cout << br2 << std::endl;
		br1.signForm(*pr);
		br1.signForm(*sh);
		br2.signForm(*robo);
		br1.executeForm(*sh);
		br1.executeForm(*pr);
		br2.executeForm(*robo);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}
