/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:48 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/12 18:08:43 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unknown"), grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &op) {
	grade = op.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name), grade(copy.grade)
{
}

Bureaucrat::~Bureaucrat(){
	
}

const std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const{
	return (this->grade);
}

void Bureaucrat::setGrade(int grade){
	this->grade = grade;
}

void Bureaucrat::gradeUp(){
	if (this->grade == 1)
		throw (GradeTooHighException());
	this->grade--;
}

void Bureaucrat::gradeDown(){
	if (this->grade == 150)
		throw (GradeTooLowException());
	this->grade++;
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &op)
{
	stream << op.getName() << " bureaucrat grade " << op.getGrade();
	return (stream);
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade Too Low");
}
