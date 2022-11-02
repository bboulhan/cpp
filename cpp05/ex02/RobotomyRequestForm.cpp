/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:27:39 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/02 18:50:43 by bboulhan         ###   ########.fr       */
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

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy){
	*this = copy;
}

void RobotomyRequestForm::execute(const Bureaucrat &exec) const{
	
}