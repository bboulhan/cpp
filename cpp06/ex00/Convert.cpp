/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:34:34 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/15 17:44:26 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(){
	str = "";
}

Convert::Convert(std::string str){
	this->str = str;
}

Convert::~Convert(){
	delete i;
	delete f;
	delete d;
}

int *Convert::to_int()
{
	if (str.length() > 1)
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
	else{
		this->i = new int(str[0]);
			return this->i;
	}
	
}

float *Convert::to_float()
{
	if (str.length() > 1)
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
	else{
		this->f = new float(str[0]);
			return this->f;
	}
}

double *Convert::to_double()
{
	if (str.length() > 1)
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
	else{
		this->d = new double(str[0]);
			return (this->d);
	}
}

char Convert::to_char()
{
	int c = 0;
	if (str.length() > 1)
	{
		try
		{
			c = stoi(str);
			if (c > 127 || c < 1)
				return 0;
			return c;
		}
		catch(const std::exception& e)
		{
			return 0;
		}
	}
	else if (str.length() == 1)
		c = str[0];
	return c;
}

void Convert::printConvert()
{
	if (this->c >= 32 && this->c <= 126)
		std::cout << "char: " << c << std::endl;
	else if (this->c != 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;
	if (this->i)
		std::cout << "int: " << *i << std::endl;
	else
		std::cout << "int: Impossible" << std::endl;
	if (this->f){
		float i = *f - static_cast<int>(*f);
		if (i == 0)
			std::cout << "float: " << *f << ".0f" << std::endl;
		else
			std::cout << "float: " << *f << "f" << std::endl;
	}
	else
		std::cout << "float: nanf" << std::endl;
	if (this->d){
		double i = *d - static_cast<int>(*d);
		if (i == 0)
			std::cout << "double: " << *d << ".0" << std::endl;
		else
			std::cout << "double: " << *d  << std::endl;
	}
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
