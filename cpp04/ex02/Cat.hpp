/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:35:59 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/29 10:45:20 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &copy);
        virtual ~Cat();
        Cat &operator=(const Cat&op);
        std::string getType() const;
        virtual void makeSound() const;
};



#endif