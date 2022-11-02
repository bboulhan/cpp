/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:59 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/02 15:12:49 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat test("ibra", 54);
		test.gradeDown();
		Bureaucrat test2("gomez", 150);
		test2.gradeUp();
		test2.gradeDown();
		Form  ab("matrix", 55, 55);
		Form cc("hello", 100, 102);
		ab.beSigned(test);
		test.signForm(ab);
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
