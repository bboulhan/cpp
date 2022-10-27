/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:36:00 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/27 17:44:29 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ibra("ibra");
    ibra.attack("victim");
    ibra.attack("victim");
    ibra.attack("victim");
    ibra.attack("victim");
    ibra.attack("victim");
    ibra.attack("victim");
    ibra.attack("victim 2");
    ibra.takeDamage(5);
    ibra.takeDamage(5);
    ibra.beRepaired(2);
    ibra.beRepaired(2);
    ibra.beRepaired(2);
    ibra.takeDamage(5);
    ibra.takeDamage(5);
    ibra.beRepaired(2);
    
}