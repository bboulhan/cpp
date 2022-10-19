/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:44:14 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/19 22:02:59 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:    
        std::string name;
        Weapon &weapon;
    public:
        void attack();   
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(); 
        void setWeapon(Weapon &weapon);
        Weapon* getWeapon(); 

};



#endif