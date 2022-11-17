/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:06:39 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/13 13:17:57 by bboulhan         ###   ########.fr       */
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

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy.getName(), copy.getGradeSign(), copy.getGradeExecute()) {
	*this = copy;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor)const{
	if (this->getSign() == false)
		throw (notSigned());
	if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	std::ofstream file;
	file.open(this->target + "_shrubbery");
    file << "                      ___" << std::endl;
    file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    file << "             ,-'          __,,-- \\" << std::endl;
    file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    file << "     (     ,-'                  `." << std::endl;
    file << "      `._,'     _   _             ;" << std::endl;
    file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    file << "                \"Hb HH dF" << std::endl;
    file << "                 \"HbHHdF" << std::endl;
    file << "                  |HHHF" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  dHHHb" << std::endl;
    file << "                .dFd|bHb.               o" << std::endl;
    file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    file << "##########################################" << std::endl;
    file.close();
}
