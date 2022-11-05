/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:34:34 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/04 17:43:59 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(){
	str = "";
}

Convert::Convert(std::string str){
	this->str = str;
}

Convert::Convert(const Convert &copy){
	*this = copy;
}

Convert &Convert::operator=(const Convert &op){
	this->str = op.str;
	return *this;
}

Convert::~Convert(){
	delete i;
	delete f;
	delete d;
}

int *Convert::to_int()
{
	try{
		int n = stoi(str);
		this->i = new int(n);
		return this->i;
	}
	catch(const std::exception &e){
		this->i = NULL;
		return NULL;
	}
}

float *Convert::to_float()
{
	try
	{
		float l = std::stof(str);
		this->f = new float(l);
		return this->f;
	}
	catch(const std::exception &e)
	{
		this->f = NULL;
		return (NULL);
	}
}

double *Convert::to_double()
{
	try
	{
		double a = std::stod(str);
		this->d = new double(a);
		return (this->d);
	}
	catch(const std::exception& e)
	{
		this->d = NULL;
		return (NULL);
	}
}

char Convert::to_char()
{
	if (str.length() == 1)
	{
		c = str[0];
		return c;
	}
	return 0;
	
}

void Convert::printConvert()
{
	if (this->c >= 32 && this->c <= 126)
		std::cout << "char: " << c << std::endl;
	else if (this->c != 0)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : Impossible" << std::endl;
	if (this->i)
		std::cout << "int: " << *i << std::endl;
	else
		std::cout << "int: Impossible" << std::endl;
	if (this->f)
		std::cout << "float: " << *f << "f" << std::endl;
	else
		std::cout << "float: nanf" << std::endl;
	if (this->d)
		std::cout << "double: " << *d << std::endl;
	else
		std::cout << "double: nan" << std::endl;
}

void Convert::convertALL()
{
	this->i = to_int();
	this->f = to_float();
	this->d = to_double();
	this->c = to_char();
}