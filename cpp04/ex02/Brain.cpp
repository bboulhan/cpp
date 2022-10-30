/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:48:46 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/29 15:03:22 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructer called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructer called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructer called" << std::endl;
}

Brain &Brain::operator=(const Brain &op)
{
	std::cout << "Brain Copy assignment operator called" <<  std::endl;
    return (*this);
}

std::string *Brain::getIdeas()
{
    return (this->ideas);
}