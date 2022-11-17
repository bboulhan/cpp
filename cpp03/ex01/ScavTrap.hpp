/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:52:19 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/11 13:04:55 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &copy);
        void attack(const std::string &target);
        void guardGate();
};

#endif