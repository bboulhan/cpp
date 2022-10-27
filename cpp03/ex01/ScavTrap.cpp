/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:52:17 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/27 18:54:26 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : HitPoint(100), EnergyPoints(50), AttackDamage(20)
{
	name = "unknown";
	std::cout << "Default constructer of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : HitPoint(100), EnergyPoints(50), AttackDamage(20)
{
	this->name = name;
	std::cout << "constructer of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructer of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << "copy constructer of ScavTrap called" << std::endl;   
}

void ScavTrap::operator=(const ScavTrap &op)
{
	if (this == &op)
		return;
	memcpy(this, &op, sizeof(op));
	std::cout << "Copy assignment operator of ScavTrap called" <<  std::endl;
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
	std::cout << " ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
