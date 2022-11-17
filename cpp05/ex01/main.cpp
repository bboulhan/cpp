/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:59 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/13 09:54:26 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat br1("Bureaucrat 1", 54);
		Bureaucrat br2("Bureaucrat 2", 70);
		Form form("matrix", 55, 55);
		std::cout << br1 << std::endl;
		std::cout << br2 << std::endl;
		std::cout << form << std::endl;
		br1.signForm(form);
		form.beSigned(br1);
		br2.signForm(form);
		
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

}
