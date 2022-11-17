/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:27:39 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/13 13:13:12 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("unknown", 72, 45){
	target = "unknown";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45){
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &op){
	this->target = op.target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form(copy.getName(), copy.getGradeSign(), copy.getGradeExecute()) {
	this->target = copy.target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor)const {
	try
	{
		if (this->getSign() == false || executor.getGrade() > this->getGradeExecute())
			throw(GradeTooLowException());
		std::cout << "glin glin glin glin" << std::endl;
		std::cout << target << " has been robotomized successfully 50% of the time" << std::endl;
	}
	catch(const std::exception &e){
		std::cout << "that robotomy failed" << std::endl;
	}
}
