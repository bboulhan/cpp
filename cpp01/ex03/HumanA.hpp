/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:44:14 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/07 16:40:07 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    private:    
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(); 
        void attack();
        void setWeapon(Weapon &weapon);
        Weapon* getWeapon() const; 

};



#endif