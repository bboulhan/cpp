/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:19:25 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/27 19:27:34 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : HitPoints(100), EnergyPoints(100), AttackDamage(30)
{
    name = "unknown";
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : HitPoints(100), EnergyPoints(100), AttackDamage(30)
{
    this->name = name;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::operator=(const FragTrap &op)
{
    if (this == &op)
		return;
	memcpy(this, &op, sizeof(op));
    std::cout << "FragTrap Copy assignment operator called" <<  std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High fives guys" << std::endl;
}