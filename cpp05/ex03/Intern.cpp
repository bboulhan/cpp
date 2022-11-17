/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:18:35 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/13 13:38:27 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	this->table = new std::string[3];
	this->table[0] = "shrubbery creation";
	this->table[1] = "robotomy request";
	this->table[2] = "presidential pardon";
}

Intern::Intern(const Intern &copy){
	table = new std::string[3];
	table[0] = copy.table[0];
	table[1] = copy.table[1];
	table[2] = copy.table[2];
}

Intern &Intern::operator=(const Intern &op){
	delete [] table;
	table = new std::string[3];
	table[0] = op.table[0];
	table[1] = op.table[1];
	table[2] = op.table[2];
	return *this;
}

int Intern::Search(std::string form){
	int i = -1;
	while (++i <= (int)form.size())
		form[i] = tolower(form[i]);
	i = 0;
    while (form != this->table[i] && i < 3)
        i++;
    return (i);
}

Intern::~Intern(){
	delete [] table;
}

Form *Intern::creatShrubbery(std::string target){
	Form *a = new ShrubberyCreationForm(target);
	return (a);
}

Form *Intern::creatRobotomy(std::string target){
	Form *a = new RobotomyRequestForm(target);
	return a;
}

Form *Intern::creatPresidential(std::string target){
	Form *a = new PresidentialPardonForm(target);
	return a;
}

Form *Intern::makeForm(std::string form, std::string target){

	Form* (Intern::*ptr[3]) (std::string target) = {&Intern::creatShrubbery, &Intern::creatRobotomy, &Intern::creatPresidential};
    int j = this->Search(form);
	while (j >= 3)
		throw(notFound());
	return ((this->*ptr[j])(target));
}

const char* Intern::notFound::what() const throw(){
	return ("Form not found");
}