/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:53:30 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/01 18:31:36 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::ostream &operator<<(std::ostream &stream, const Form &op)
{
	std::string status;
	if (op.getSign() == true)
		status = " is signed ";
	else
		status = " is not signed ";
	stream << op.getName() << status << " grade required to sign " <<  op.getGradeSign() << " grade required to execute " << op.getGradeExecute() << std::endl;
	return (stream);
}

Form::Form() : name("unknown"), gradeToSign(150), gradeToExecute(150) {
	this->sign = false;
}

Form::Form(std::string name, int grade1, int grade2) : name(name), gradeToSign(grade1), gradeToExecute(grade2)
{
	this->sign = false;
	if (gradeToSign < 0 || gradeToExecute < 0)
		throw (gradeHigh());
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw(gradeLow());
}

Form::~Form(){

}

Form::Form(const Form &copy) : gradeToSign(150), gradeToExecute(150){
	this->sign = copy.sign;
}

Form &Form::operator=(const Form &op)
{
	this->sign = op.sign;
	return (*this);
}

const std::string Form::getName() const{
	return (this->name);
}

const int Form::getGradeSign() const{
	return (this->gradeToSign);
}

const int Form::getGradeExecute() const{
	return (this->gradeToExecute);
}

void Form::beSigned(const Bureaucrat &br){
	if (br.getGrade() <= this->gradeToSign)
		this->sign = true;
	else 
		throw (gradeLow());
}

const bool Form::getSign() const{
	return (sign);
}
