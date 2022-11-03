/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:59 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/03 12:58:15 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat test("ibra", 30);
		test.gradeDown();
		Bureaucrat test2("gomez", 5);
		test2.gradeUp();
		test2.gradeDown();
		ShrubberyCreationForm ab("matrix");		
		RobotomyRequestForm xx("CPP");
		PresidentialPardonForm cc("hello");
		//ab.beSigned(test);
		//ab.execute(test);
		xx.beSigned(test);
		test.executeForm(xx);
		//test.signForm(ab);
		//cc.beSigned(test2);
		//cc.execute(test2);
		//test2.signForm(cc);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const char *s){
		std::cout << s <<std::endl;
	}

}
