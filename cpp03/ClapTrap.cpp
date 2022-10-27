/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brahim <brahim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:32:45 by brahim            #+#    #+#             */
/*   Updated: 2022/10/27 13:38:29 by brahim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoint(10), EnergyPoints(10), AttackDamage(0)
{
    this->name = "unknown";
}

ClapTrap::ClapTrap(std::string name) : HitPoint(10), EnergyPoints(10), AttackDamage(0)
{
    this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    memcpy(this, &copy, sizeof(copy));
}

void ClapTrap::attack(const std::string &target)
{    
    std::cout << "ClapTrap" << name << "attacks" << target << "causing" << AttackDamage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->HitPoint = this->HitPoint - amount;
    this->EnergyPoints--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->HitPoint += amount;
    this->EnergyPoints--;
}

