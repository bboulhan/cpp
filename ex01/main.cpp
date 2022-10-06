/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:47:04 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/06 16:40:56 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesome.hpp"

int	check_commamd(std::string in)
{
	if (!in.compare("ADD"))
		return 1;
	else if (!in.compare("SEARCH"))
		return 2;
	else if (!in.compare("EXIT"))
		return 3;
	else
		return 0;
}

void	stock_input(std::string &data, std::string s, int *j)
{
	std::string	in;
	
	std::cout << s;
	getline(std::cin, in);
	if (in.length() == 0 && !std::cin.eof())
		return ;
	else if (std::cin.eof())
		exit(0);
	data = in;
	(*j)++;
}

void	ADD(PhoneBook &book)
{
	static int	i = 0;
	int			j = 0;
	int			k = j;
	
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
		if (j != k)
		{
			i++;
			k = j;
		}
	}
}

// int	search_input()
// {
// 	std::string in;
	
// }

void	SEARCH(PhoneBook &book)
{

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
		if (check_commamd(s) == 1)
			ADD(book);
		else
			std::cout << "wrong command !\n";
	}
	
}