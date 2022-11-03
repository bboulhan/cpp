/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:59 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/03 16:56:20 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Robotomy request", "Bender");
		std::cout << rrf->getName() << std::endl;
		// Bureaucrat test("ibra", 14);
		// test.gradeDown();
		// Bureaucrat test2("gomez", 5);
		// test2.gradeUp();
		// test2.gradeDown();
		// ShrubberyCreationForm ab("matrix");		
		// RobotomyRequestForm xx("CPP");
		// PresidentialPardonForm cc("hello");
		// xx.beSigned(test);
		// ab.beSigned(test);
		// ab.execute(test);
		// xx.execute(test);
		// test.signForm(ab);
		// cc.beSigned(test2);
		// cc.execute(test2);
		// test2.signForm(cc);
		// std::cout << ab;
		// std::cout << cc;
		// std::cout << test;
		// std::cout << test2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}
