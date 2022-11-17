/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:38:44 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/03 16:44:59 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did, I would not be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::search(std::string level, std::string table[4])
{
	int i = 0;
	while (level != table[i] && i < 4)
		i++;
	return (i);
}

void Harl::execute(int i)
{
	void (Harl::*pointers[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (i < 4)
	{
		(this->*pointers[i]) ();
		i++;
	}
}

void Harl::complain(std::string level)
{
	std::string table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = search(level, table);
	switch(i)
	{
		case 0:
			this->execute(i);
			break;
		case 1:
			this->execute(i);
			break;
		case 2:
			this->execute(i);
			break;
		case 3:
			this->execute(i);
			break;
		default:
			std::cout << "Parametre Error" << std::endl;
			break;
	}

}
