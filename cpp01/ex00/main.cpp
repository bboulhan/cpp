/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:17:51 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/07 15:26:13 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie("hello");
	zombie.announce();
	zombie.randomChump("ibra");
    Zombie* zombie2 = zombie.newZombie("hello2");
    zombie2->announce();
    delete(zombie2);
}