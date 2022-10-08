/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:09:11 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/08 18:25:07 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesome.hpp"

int	check_command(std::string in)
{
	if (!in.compare("ADD"))
		return 1;
	else if (!in.compare("SEARCH"))
		return 2;
	else if (!in.compare("EXIT"))
		return 3;
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

void	display_info(Contact contact)
{
	std::cout << "first name : " << contact.firstName << std::endl;
	std::cout << "last name : " << contact.lastName << std::endl;
	std::cout << "nickname : " << contact.nickName << std::endl;
	std::cout << "phone number : " << contact.phoneNumber << std::endl;
	std::cout << "darkest secret : " << contact.dakest_secret << std::endl;
}

int	search_input(std::string in)
{
	int n;

	n = stoi(in);
	if (n >= 0 && n < 9)
		return (n);
	return (-1);
}