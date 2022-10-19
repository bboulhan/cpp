/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:37:29 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/18 18:07:05 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	PhoneBook::check_command(std::string in)
{
	if (!in.compare("ADD"))
		return 1;
	else if (!in.compare("SEARCH"))
		return 2;
	else if (!in.compare("EXIT"))
		return 3;
    return 0;
}

int	PhoneBook::empty()
{
	if (index == 0)
		return 1;
	return 0;
}

void	PhoneBook::display_book()
{
	int i = 0;
	std::cout << "  ----------   ----------   ----------   ----------  " << std::endl;
	std::cout << "|      index | first name |  last name |   nickname |" << std::endl;
	while (i < index)
	{
		std::cout << "  ----------   ----------   ----------   ----------  " << std::endl;
		this->Contacts[i++].display_contact();
	}
	std::cout << "  ----------   ----------   ----------   ----------  " << std::endl;
}

int	PhoneBook::search_input(std::string input)
{
	if(input.length() > 1)
		return -1;
	if (input[0] < '9' && input[0] >= '0')
		return (input[0] - 48);
	else
		return -1;
}

void	PhoneBook::SEARCH()
{
	std::string input;
	int	id;
	
	if (this->empty())
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	this->display_book();
	while (1)
	{
		std::cout << "Enter the index of the contact you want to display: ";
		getline(std::cin, input);
		if (input.length() == 0 && !std::cin.eof())
			continue;
		else if (std::cin.eof())
			exit(0);
		id = this->search_input(input);
		if (id == 0)
			return ;
		else if (id != -1)
			this->Contacts[id - 1].display_info();
		else
			std::cout << "Invalid index" << std::endl;
	}
}

void	PhoneBook::ADD()
{
	static int	i = 0;
	int			j = 0;

	while (j < 5)
	{
		if (j == 0)
			this->Contacts[i].stock_input("first name : ", &j, i + 1);
		else if (j == 1)
			this->Contacts[i].stock_input("last name: ", &j, i + 1);
		else if (j == 2)
			this->Contacts[i].stock_input("nickname : ", &j, i + 1);
		else if (j == 3)
			this->Contacts[i].stock_input("phone number: ", &j, i + 1);
		else if (j == 4)
			this->Contacts[i].stock_input("darkest secret : ", &j, i + 1);
	}
	if (this->index < 8)
		this->index++;
	i++;
	if (i == 8)
		i = 0;
}

