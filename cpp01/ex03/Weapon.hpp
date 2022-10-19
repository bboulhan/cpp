/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:33:46 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/19 19:05:11 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class   Weapon{
    private:
        std::string type;
    public:
        std::string getType();
        void setType(std::string type);
        Weapon(std::string type);
        ~Weapon();
};

#endif