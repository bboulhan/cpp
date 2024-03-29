/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:23:16 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/11 18:03:45 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Default constructer called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
    std::cout << "Dog copy constructer called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructer called" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
	std::cout << "Dog bark" << std::endl;
}