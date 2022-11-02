/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:26:05 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/02 16:26:46 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("unknown", 25, 5){
	target = "unknown";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5){
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &op){
	this->target = op.target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy){
	*this = copy;
}

void PresidentialPardonForm::execute(const Bureaucrat &exec) const{
	
}
