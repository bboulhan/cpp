/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:21:34 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/07 15:29:30 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		void announce(void);
		Zombie(std::string name);
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
		~Zombie();
};
     
#endif