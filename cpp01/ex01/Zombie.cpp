/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:09:46 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/19 17:36:02 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "ibra";
}

void Zombie::announce(void)
{
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
} 

Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed" << std::endl;
}