/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:32:45 by brahim            #+#    #+#             */
/*   Updated: 2022/11/11 13:28:21 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoint(100), EnergyPoints(100), AttackDamage(30)
{
    this->name = "unknown";
    std::cout << "Default constructer of ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : HitPoint(100), EnergyPoints(100), AttackDamage(30)
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
    if (EnergyPoints <= 0)
    {
        std::cout << "there is no Energy points left" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " <<  AttackDamage << " points of damage!" << std::endl;
    EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoint == 0)
    {
        std::cout << "No Hit points left" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " take damage , losing " << amount << " of health" << std::endl;
    HitPoint = HitPoint - amount;
    if (HitPoint < 0)
        HitPoint = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyPoints <= 0)
    {
        std::cout << "there is no Energy points left" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " repairs itself, adding " << amount << " of health" << std::endl;
    HitPoint += amount;
    EnergyPoints--;
}

