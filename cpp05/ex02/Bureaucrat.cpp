/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:39:48 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/13 11:10:33 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("unknown"), grade(150){

}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &op) {
	this->grade = op.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name) {
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
	stream << op.getName() << ", bureaucrat grade " << op.getGrade();
	return (stream);
}

void Bureaucrat::signForm(Form &fm)
{
	try 
	{
		fm.beSigned(*this);
		std::cout << this->name << " signed " << fm.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << this->name << " couldn't sign " << fm.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form){
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

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade Too Low");
}