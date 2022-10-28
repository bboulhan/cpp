/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:48:46 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/28 19:25:32 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    ideas = new std::string[100];
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
}

Brain::~Brain()
{
    delete [] ideas;
}

Brain &Brain::operator=(const Brain &op)
{
    delete [] ideas;
    this->ideas = new std::string [100];
    return (*this);
}

std::string *Brain::getIdeas()
{
    return (this->ideas);
}