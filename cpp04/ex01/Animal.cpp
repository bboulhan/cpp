/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:25:09 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/11 18:54:18 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal Default constructer called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Animal copy constructer called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructer called" << std::endl;	
}

Animal& Animal::operator=(const Animal &op)
{
	std::cout << "Animal Copy assignment operator called" <<  std::endl;
	this->type = op.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Cats don't bark" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

