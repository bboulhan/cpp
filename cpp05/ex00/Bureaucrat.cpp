/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:48 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/31 19:21:16 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unknown"), grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
	if (grade < 1)
		throw (gradeHigh());
	else if (grade > 150)
		throw (gradeLow());
	this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &op) {
	*this = op;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	*this = copy;
}

Bureaucrat::~Bureaucrat(){
	
}

const std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const{
	return (this->grade);
}

void Bureaucrat::gradeUp(){
	this->grade--;
}

void Bureaucrat::gradeDown(){
	this->grade++;
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &op)
{
	stream << op.getName() << " bureaucrat grade " << op.getGrade() << std::endl;
	return (stream);
}

