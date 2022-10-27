/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:07:55 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/25 14:34:14 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(copy);
}

Fixed::Fixed(const int i)
{
	this->fixedPoint = (int)roundf(i * (1 << this->bits));
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = (float)roundf(f * (1 << this->bits));
}

void Fixed::operator=(const Fixed &op)
{
	std::cout << "Copy assignment operator called" <<  std::endl;
	this->fixedPoint = op.getRawBits();
}

int Fixed::getRawBits() const
{
	return this->fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

float Fixed::toFloat() const
{
	return ((float)(this->fixedPoint) / (float)(1 << this->bits));	
}

int	Fixed::toInt() const
{
	return (this->fixedPoint / (1 << this->bits));	
}

std::ostream& operator<<(std::ostream& stream, const Fixed &op)
{
    stream << op.toFloat();
    return (stream);
}

