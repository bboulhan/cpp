/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:35:58 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/18 18:23:24 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::stock_input(std::string s, int *j, int id)
{
	std::string	in;
    int i = -1;

	std::cout << s;
	getline(std::cin, in);
	if (in.length() == 0 && !std::cin.eof())
		return ;
	else if (std::cin.eof())
		exit(0);
	while (++i < (int)in.length())
    {
        if (in[i] < 32)
        {
            std::cout << "invalid information\n";
            return ;
        }
    }
    if (*j == 0)
        this->firstName = in;
    else if (*j == 1)
        this->lastName = in;
    else if (*j == 2)
        this->nickName = in;
    else if (*j == 3)
        this->phoneNumber = in;
    else if (*j == 4)
    {   
        this->dakest_secret = in;
        this->id = id;
    }    
	(*j)++;
}

void	Contact::display_contact()
{
	std::string index;

	index = std::to_string(id);
	std::cout << "|";
    this->display_column(index);
    this->display_column(firstName);
    this->display_column(lastName);
    this->display_column(nickName);
	std::cout << std::endl;
}

void	Contact::display_column(std::string str)
{
	int i = 0;
	
	std::cout << " ";
	int j = (int)str.length();
	while (i < 10 - j)
	{	
		std::cout << " ";
		i++;
	}
	j = 0;
	while (i < 10)
	{
		if (j == 9)
			break;
		std::cout << str[j++];
		i++;
	}
	if ((int)str.length() >= 10)
		std::cout << ".";
	std::cout << " |";
}

void	Contact::display_info()
{
	if (this->empty())
	{
		std::cout << "No contact found" << std::endl;
		return ;
	}
	std::cout << "first name : " << this->firstName << std::endl;
	std::cout << "last name : " << this->lastName << std::endl;
	std::cout << "nickname : " << this->nickName << std::endl;
	std::cout << "phone number : " << this->phoneNumber << std::endl;
	std::cout << "darkest secret : " << this->dakest_secret << std::endl;
	std::cout << "enter 0 if you want to go back" << std::endl;
}

int Contact::empty()
{
    if (firstName.empty() && lastName.empty() && nickName.empty() && phoneNumber.empty() && dakest_secret.empty())
        return (1);
    return (0);
}