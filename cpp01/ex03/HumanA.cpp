/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:57:20 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/19 22:03:30 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

// void    HumanA::setWeapon(Weapon &weapon)
// {
//     this->weapon = &weapon;
// }

// Weapon *HumanA::getWeapon()
// {
//     return(this->weapon);
// }