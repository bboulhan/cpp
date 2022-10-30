/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:22:06 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/29 10:45:26 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &copy);
        virtual ~Dog();
        Dog &operator=(const Dog &op);
        std::string getType() const;
        virtual void makeSound() const;
};


#endif