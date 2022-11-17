/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:55:52 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/16 20:11:15 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(100){

}

Span::Span(unsigned int N) : N(N){
	
}

Span::Span(const Span &copy)
{
	this->N = copy.N;
	this->array = copy.array;
}

Span &Span::operator=(const Span &op){
	this->N = op.N;
	this->array = op.array;
	return *this;
}

Span::~Span(){
	
}

void Span::addNumber(int n){
	if (array.size() == N)
		throw(NoSpaceLeft());
	array.push_back(n);
}

int Span::shortestSpan()
{
	int short_span;
	int tmp;
	
	std::vector<int>::iterator it = array.begin();
	short_span = *it - *(++it);
	short_span = abs(short_span);
	while (it != array.end() - 1)
	{
		tmp = *it - *(++it);
		if (abs(tmp) < short_span)
			short_span = abs(tmp); 		
	}
	return short_span;
}

int Span::longestSpan()
{
	int long_span;
	int tmp;
	
	std::vector<int>::iterator it = array.begin();
	long_span = *it - *(++it);
	long_span = abs(long_span);
	while (it != array.end() - 1)
	{
		tmp = *it - *(++it);
		if (abs(tmp) > long_span)
			long_span = abs(tmp);
	}
	return long_span;
}

const char* Span::NoSpaceLeft::what() const throw(){
	return "No space left to add an element";
}

void Span::randomly_add(){
	static unsigned int i = 1;
	srand(time(NULL));
	addNumber((rand() + i) % N);
	i += rand() % N;
}

void Span::oneCall(unsigned int range)
{
	if (range + array.size() > N || range == 0)
		throw (NoSpaceLeft());
	randomly_add();
	std::vector<int> ::iterator it = array.begin();
	unsigned int i = 1;
	it += array.size() - 1;
	while (it != array.end() && i < range)
	{
		randomly_add();
		i++;
		it++;
	}	
}

std::vector<int> Span::getArray() const{
	return this->array;
}

std::ostream &operator<<(std::ostream &stream, const Span &sp)
{
	std::vector<int>::iterator it = sp.getArray().begin();
	std::vector<int>::iterator ite = sp.getArray().end();
	while (it != ite)
	{	
		stream << *it << std::endl;
		++it;
	}
	return stream;
}