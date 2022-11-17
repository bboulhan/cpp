/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:48:46 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/11 18:15:09 by bboulhan         ###   ########.fr       */
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
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain destructer called" << std::endl;
}

Brain &Brain::operator=(const Brain &op)
{
	std::cout << "Brain Copy assignment operator called" <<  std::endl;
	memcpy(this, &op, sizeof(op));
	return (*this);
}
