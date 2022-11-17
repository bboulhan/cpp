/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:32:45 by brahim            #+#    #+#             */
/*   Updated: 2022/11/11 13:09:31 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoint(100), EnergyPoints(50), AttackDamage(20)
{
    this->name = "unknown";
    std::cout << "Default constructer of ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : HitPoint(100), EnergyPoints(50), AttackDamage(20)
{
    this->name = name;
    std::cout << "constructer of ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << "copy constructer of ClapTrap called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &op)
{
    memcpy(this, &op, sizeof(op));
    std::cout << "Copy assignment operator of ClapTrap called" <<  std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructer of ClapTrap called" <<  std::endl;
}
void ClapTrap::attack(const std::string &target)
{
    if (this->EnergyPoints <= 0)
    {
        std::cout << "there is no Energy points left" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " <<  this->AttackDamage << " points of damage!" << std::endl;
    this->EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoint == 0)
    {
        std::cout << "No Hit points left" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " take damage , losing " << amount << " of health" << std::endl;
    this->HitPoint = this->HitPoint - amount;
    if (this->HitPoint < 0)
        this->HitPoint = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoints <= 0)
    {
        std::cout << "there is no Energy points left" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " repairs itself, adding " << amount << " of health" << std::endl;
    this->HitPoint += amount;
    this->EnergyPoints--;
}

