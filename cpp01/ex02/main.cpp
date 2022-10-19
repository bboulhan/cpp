/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:38:09 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/19 17:47:50 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
 	std::string &stringREF = str;
	std::cout << "str address : " << &str << std::endl;
	std::cout << "stringPTR address : " << stringPTR << std::endl;
	std::cout << "stringREF address : " << &stringREF << std::endl;
	std::cout << "the value of str : " << str << std::endl;
	std::cout << "the value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "the value of stringREF : " << str << std::endl;
}