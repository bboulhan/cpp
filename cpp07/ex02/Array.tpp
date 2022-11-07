/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:15:34 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/07 10:40:47 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array(){
	this->elem = new T(0);
}

Array::Array(unsigned int n){
	this->elem = new T[n]();
	this->n = n;
}

Array::Array(const Array &copy){
	this->n = op.n;
	this->elem = new T[n];
	for(int i = 0; i < n; i++){
		this->elem[i] = op.elem[i];
	}
}

Array &Array::operator=(const Array &op){
	this->n = op.n;
	delete [] this->elem;
	this->elem = new T[n];
	for(int i = 0; i < n; i++){
		this->elem[i] = op.elem[i];
	}
}

Array::~Array(){
	delete [] elem;
}

unsigned int Array::size() const{
	return this->n;
}

T &Array::operator[](unsigned int i) const{
	if (i >= n)
		throw (OutOfBounds());
	return(elem[i]);
}

std::ostream &operator<<(const std::ostream &stream, Array<int> &arr)
{
	for (int i=0; i < arr.size(); i++){
		stream << arr.elem[i] << " ";
	}
	return (stream);
}

