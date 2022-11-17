/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:36:00 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/11 13:33:42 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap ibra("ibra");
    ibra.attack("victim");
    ibra.attack("victim");
    ibra.attack("victim");

    ibra.takeDamage(50);
    ibra.takeDamage(50);
	
	ibra.beRepaired(20);
    ibra.takeDamage(50);
    
    ibra.beRepaired(20);
    ibra.beRepaired(20);
	
    ibra.takeDamage(50);
    ibra.beRepaired(20);
	
    ibra.highFivesGuys();
    
}