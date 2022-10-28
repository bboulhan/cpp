/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:16:34 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/28 18:16:35 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default constructer called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
    std::cout << "WrongCat copy constructer called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructer called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat&op)
{
	std::cout << "WrongCat Copy assignment operator called" <<  std::endl;
    this->type = op.type;
    return (*this);
}

std::string WrongCat::getType() const
{
    return (this->type);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat meows" << std::endl;
}