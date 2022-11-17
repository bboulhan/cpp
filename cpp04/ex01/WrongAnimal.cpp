/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:47:01 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/04 14:29:27 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("human")
{
	std::cout << "WrongAnimal Default constructer called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "WrongAnimal copy constructer called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructer called" << std::endl;	
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &op)
{
	std::cout << "WrongAnimal Copy assignment operator called" <<  std::endl;
	this->type = op.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongCats don't bark" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}