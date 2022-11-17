/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:59 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/13 09:45:40 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat test2("gomez", 150);
		Bureaucrat test("ibra", 56);
		test.gradeDown();
		std::cout << test;
		Bureaucrat test3(test2);
		test2.gradeUp();
		std::cout << test2;
		test2.gradeDown();
		test2.gradeDown();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}
