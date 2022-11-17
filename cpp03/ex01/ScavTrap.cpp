/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:52:17 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/11 13:22:07 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default constructer of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "constructer of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructer of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << "copy constructer of ScavTrap called" << std::endl;   
}

void ScavTrap::attack(const std::string &target)
{
	if (EnergyPoints <= 0)
    {
        std::cout << "there is no Energy points left" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " <<  AttackDamage << " points of damage!" << std::endl;
    EnergyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
