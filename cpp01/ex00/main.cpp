/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:17:51 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/19 16:05:52 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie zombie("hello");
    Zombie* zombie2 = zombie.newZombie("hello2");
    zombie2->announce();
    delete(zombie2);
}