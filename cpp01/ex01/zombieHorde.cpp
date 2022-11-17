/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:09:51 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/07 18:36:05 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	if (N > 0)
	{
		Zombie* zombies= new Zombie[N];
		
		int i = 0;
		while (i < N)
		{
			zombies[i].name = name;
			zombies[i].announce();
			i++;
		}
		return (zombies);
	}
	return (NULL);
}