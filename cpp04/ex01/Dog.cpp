/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:23:16 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/28 19:49:00 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog Default constructer called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
    std::cout << "Dog copy constructer called" << std::endl;
}

Dog::~Dog()
{
    delete brain;
	std::cout << "Dog destructer called" << std::endl;
}

Dog& Dog::operator=(const Dog&op)
{
	std::cout << "Dog Copy assignment operator called" <<  std::endl;
    delete brain;
    this->type = op.type;
    this->brain = new Brain(*op.brain);
    return (*this);
}

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
	std::cout << "Dog bark" << std::endl;
}