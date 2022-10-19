/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:45:02 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/19 20:01:05 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon *weapon;
    public:
        void attack();   
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon &weapon);
        Weapon* getWeapon();

};

#endif