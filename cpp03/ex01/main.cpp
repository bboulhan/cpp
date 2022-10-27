/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:36:00 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/27 18:58:55 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap ibra("ibra");
    ibra.attack("victim");
    ibra.attack("victim");
    ibra.attack("victim");
    ibra.attack("victim");
    ibra.attack("victim");
    ibra.attack("victim");
    ibra.attack("victim 2");
    ibra.takeDamage(50);
    ibra.takeDamage(50);
    ibra.beRepaired(20);
    ibra.beRepaired(20);
    ibra.beRepaired(20);
    ibra.takeDamage(50);
    ibra.takeDamage(50);
    ibra.beRepaired(20);
    ibra.guardGate();
    
    
}