/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:24:01 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/10 12:17:10 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0){
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &copy){
	this->operator=(copy);
}

Fixed::Fixed(const int i)
{
	this->fixedPoint = (int)roundf(i * (1 << this->bits));
}

Fixed::Fixed(const float f)
{
	this->fixedPoint = (float)roundf(f * (1 << this->bits));
}

Fixed& Fixed::operator=(const Fixed &op)
{
	this->fixedPoint = op.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	return this->fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
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

bool Fixed::operator>(const Fixed &op) const
{
	if (this->fixedPoint > op.fixedPoint)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &op) const
{
	if (this->fixedPoint < op.fixedPoint)
		return 1;
	return 0;
}

bool Fixed::operator>=(const Fixed &op) const
{
	if (this->fixedPoint >= op.fixedPoint)
		return 1;
	return 0;
}

bool Fixed::operator<=(const Fixed &op) const
{
	if (this->fixedPoint <= op.fixedPoint)
		return 1;
	return 0;
}

bool Fixed::operator==(const Fixed &op) const
{
	if (this->fixedPoint == op.fixedPoint)
		return 1;
	return 0;
}

bool Fixed::operator!=(const Fixed &op) const
{
	if (this->fixedPoint != op.fixedPoint)
		return 1;
	return 0;
}

Fixed Fixed::operator+(const Fixed &op) const
{
	return (Fixed(this->toFloat() + op.toFloat()));
}

Fixed Fixed::operator-(const Fixed &op) const
{
	return (Fixed(this->toFloat() - op.toFloat()));
}

Fixed Fixed::operator*(const Fixed &op) const
{
	return (Fixed(this->toFloat() * op.toFloat()));
}

Fixed Fixed::operator/(const Fixed &op) const
{
	return (Fixed(this->toFloat() / op.toFloat()));
}

Fixed& Fixed::operator++()
{
	Fixed tmp(*this);
	++this->fixedPoint;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixedPoint++;
	return tmp;
}

Fixed& Fixed::operator--()
{
	Fixed tmp(*this);
	--this->fixedPoint;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fixedPoint--;
	return tmp;
}

const Fixed& Fixed::min(const Fixed &op1, const Fixed &op2)
{
	if (op1 < op2)
		return (op1);
	return (op2);
}

Fixed& Fixed::min(Fixed &op1, Fixed &op2)
{
	if (op1 < op2)
		return (op1);
	return (op2);
}

const Fixed& Fixed::max(const Fixed &op1, const Fixed &op2)
{
	if (op1 > op2)
		return (op1);
	return (op2);
}

Fixed& Fixed::max(Fixed &op1, Fixed &op2)
{
	if (op1 > op2)
		return (op1);
	return (op2);
}
