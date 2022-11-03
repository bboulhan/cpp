/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:06:39 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/02 18:10:05 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("unknown", 145, 137) {
	target = "unknown";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137){
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &op){
	this->target = op.target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy){
	*this = copy;
}

void ShrubberyCreationForm::execute(const Bureaucrat &exec) const{
	if (this->getSign() == false)
		throw (notSigned());
	if (exec.getGrade() > this->getGradeExecute())
		throw gradeLow();
	std::ofstream file;
	file.open(this->target + "_shrubbery");
	file << "         v" << std::endl;
	file << "        >X<" << std::endl;
	file << "         A" << std::endl;
	file << "        d$b" << std::endl;
	file << "      .d\\$$b." << std::endl;
	file << "    .d$i$$\\$$b." << std::endl;
	file << "  .d$$\\$$$\\$$$b." << std::endl;
	file << "  d$$i\\$$$\\$$$ib" << std::endl;
	file << "  $$$\\$$$\\$$$\\$$" << std::endl;
	file << " 4$$$$$$$$$$$$$$F" << std::endl;
	file << "  $$$i\\$$$\\$$$i$" << std::endl;
	file << "  $$$\\$$$\\$$$\\$$" << std::endl;
	file << "  `$$\\$$$\\$$$\\$'" << std::endl;
	file << "    `$$\\$$$\\$$'" << std::endl;
	file << "      `$$\\$$$'" << std::endl;
	file << "        `$$'" << std::endl;
	file.close();
}
