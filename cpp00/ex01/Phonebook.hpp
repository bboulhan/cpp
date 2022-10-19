/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:41 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/18 18:24:41 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook{
	private:
		int	index;
		Contact Contacts[8];
    public:
        int empty();
        int check_command(std::string s);
        void ADD();
        void SEARCH();
        void display_book();
        int search_input(std::string input);
};

#endif