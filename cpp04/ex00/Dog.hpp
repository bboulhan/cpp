/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:22:06 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/28 17:30:03 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(const Dog &copy);
        ~Dog();
        Dog &operator=(const Dog &op);
        std::string getType() const;
        virtual void makeSound() const;
};



#endif