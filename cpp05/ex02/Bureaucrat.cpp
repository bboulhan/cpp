/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:48 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/03 12:56:39 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("unknown"), grade(150){

}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
	if (grade < 1)
		throw (gradeHigh());
	else if (grade > 150)
		throw (gradeLow());
	this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &op) {
	this->grade = op.grade;
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
	if (this->grade < 0)
		throw (gradeHigh());
	if (this->grade > 150)
		throw (gradeLow());
}

void Bureaucrat::gradeDown(){
	this->grade++;
	if (this->grade < 0)
		throw (gradeHigh());
	if (this->grade > 150)
		throw (gradeLow());
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &op)
{
	stream << op.getName() << ", bureaucrat grade " << op.getGrade() << std::endl;
	return (stream);
}

void Bureaucrat::signForm(const Form &fm) const{
	if (fm.getSign() == true)
	{
		std::cout << this->name << " signed " << fm.getName() << std::endl;
	}
	else
	{
		std::cout << this->name << " couldn't sign " << fm.getName() << " because " << this->getGrade() << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form){
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception &a)
	{
		std::cout << "cannot execute the form cause the Bureaucrat grade is to low than the requirement" << std::endl;
	}
}
