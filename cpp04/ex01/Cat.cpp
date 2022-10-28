/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:52:47 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/28 19:43:42 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat Default constructer called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
    std::cout << "Cat copy constructer called" << std::endl;
}

Cat::~Cat()
{
    delete brain;
	std::cout << "Cat destructer called" << std::endl;
}

Cat& Cat::operator=(const Cat&op)
{
	std::cout << "Cat Copy assignment operator called" <<  std::endl;
    this->type = op.type;
    delete brain;
    this->brain = new Brain(*op.brain);
    return (*this);
}

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
	std::cout << "Cat meows" << std::endl;
}