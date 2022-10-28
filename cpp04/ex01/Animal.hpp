/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:33:08 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/28 17:29:39 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &copy);
		~Animal();
		Animal &operator=(const Animal &op);
		virtual void makeSound() const;
		std::string getType() const;
};

#endif