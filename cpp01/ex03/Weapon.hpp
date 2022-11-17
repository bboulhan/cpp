/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:33:46 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/07 18:09:57 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class   Weapon{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string getType() const;
        void setType(std::string type);
};

#endif