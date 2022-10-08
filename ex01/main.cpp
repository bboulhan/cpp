/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:47:04 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/08 18:45:14 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesome.hpp"
#include <unistd.h>

void	ADD(PhoneBook &book)
{
	static int	i = 0;
	int			j = 0;
	
	while (j < 5)
	{
		if (j == 0)
			stock_input(book.Contacts[i].firstName, "first name : ", &j);
		else if (j == 1)
			stock_input(book.Contacts[i].lastName, "last name: ", &j);
		else if (j == 2)
			stock_input(book.Contacts[i].nickName, "nickname : ", &j);
		else if (j == 3)
			stock_input(book.Contacts[i].phoneNumber, "phone number: ", &j);
		else if (j == 4)
			stock_input(book.Contacts[i].dakest_secret, "darkest secret : ", &j);
	}
	book.Contacts[i].id = i + 1;
	book.index = i + 1;
	i++;
}

void	display_column(std::string str)
{
	int i = 0;
	
	std::cout << " ";
	int j = (int)str.length();
	while (i < 10 - j)
	{	
		std::cout << " ";
		i++;
	}
	while (i < 9)
		std::cout << str[i++];
	if ((int)str.length() >= 10)
		std::cout << ".";
	std::cout << " |";
}

void	display_contact(Contact contact)
{
	std::string index;

	index = std::to_string(contact.id);
	std::cout << "|";
	display_column(contact.firstName);
	display_column(contact.lastName);
	display_column(contact.nickName);
	display_column(index);
	std::cout << "\n" << "  ----------   ----------   ----------   ----------  " << std::endl;
}

void	display_book(PhoneBook book)
{
	int i = 0;
	std::cout << "  ----------   ----------   ----------   ----------  " << std::endl;
	std::cout << "|      index | first name |  last name |   nickname |" << std::endl;
	while (i < book.index)
	{
		std::cout << "  ----------   ----------   ----------   ----------  " << std::endl;
		display_contact(book.Contacts[i++]);
	}
	std::cout << "  ----------   ----------   ----------   ----------  " << std::endl;
}


void	SEARCH(PhoneBook &book)
{
	std::string input;

	while (1)
	{
		display_book(book);
		std::cout << "Enter the index of the contact you want to display: ";
		getline(std::cin, input);
		if (input.length() == 0 && !std::cin.eof())
			continue;
		else if (std::cin.eof())
			exit(0);
		if (search_input(input) == 0)
			return ;
		else if (search_input(input) != -1)
			display_info(book.Contacts[search_input(input) - 1]);
		else
			std::cout << "Invalid index" << std::endl;
	}
}

int main()
{
	Contact     person;
	PhoneBook	book;
	std::string	s;
	
	
	while (1)
	{
		//std::cout << "what can I do sir\n";
		getline(std::cin, s);
		if (s.length() == 0 && !std::cin.eof())
			continue;
		else if (std::cin.eof())
			exit(0);
		if (check_command(s) == 1)
			ADD(book);
		else if (check_command(s) == 2)
			SEARCH(book);
		else if (check_command(s) == 3)
			exit(0);
		else
			std::cout << "Command not found" << std::endl;
	}
	
}

