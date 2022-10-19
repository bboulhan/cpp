/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:47:04 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/18 18:06:15 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	PhoneBook   book;
	std::string s;
	
	while (1)
	{
		std::cout << "what I can do for you ADD, SEARCH, EXIT" << std::endl;
		getline(std::cin, s);
		if (s.length() == 0 && !std::cin.eof())
			continue;
		else if (std::cin.eof())
			exit(0);
		if (book.check_command(s) == 1)
			book.ADD();
		else if (book.check_command(s) == 2)
			book.SEARCH();
		else if (book.check_command(s) == 3)
			exit(0);
		else
			std::cout << "Command not found" << std::endl;
	}
}

