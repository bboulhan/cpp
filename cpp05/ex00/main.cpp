/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:59 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/31 19:20:43 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat test("ibra", 56);
		std::cout << test;
		Bureaucrat test2("karim", 160);
		std::cout << test2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
}