/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:27:59 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/11 18:15:12 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &copy);
        ~Brain();
        Brain &operator=(const Brain &op);       
};


#endif