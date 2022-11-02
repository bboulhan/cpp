/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:59 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/02 18:20:59 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat test("ibra", 140);
		test.gradeDown();
		Bureaucrat test2("gomez", 150);
		test2.gradeUp();
		test2.gradeDown();
		ShrubberyCreationForm ab("matrix");		
		ShrubberyCreationForm cc("hello");
		test.signForm(ab);
		ab.execute(test);
		ab.beSigned(test);
		cc.beSigned(test2);
		test2.signForm(cc);
		std::cout << ab;
		std::cout << cc;
		std::cout << test;
		std::cout << test2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
