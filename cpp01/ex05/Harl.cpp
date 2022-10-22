/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:58:46 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/22 17:13:02 by bboulhan         ###   ########.fr       */
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

void Harl::complain(std::string level)
{
    int i = 0;
    std::string table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*pointers[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int j = this->search(level, table);
    while (i <= j && j != 4)
    {
        (this->*pointers[i]) ();
        i++;
    }
}