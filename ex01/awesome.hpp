/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:47:56 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/06 12:46:49 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
# define AWESOME_HPP

#include <iostream>

class Contact{
	private:

	public:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string dakest_secret;
	Contact(){
	};
};

class PhoneBook{
	private:
		static int	index;
	public:
		Contact Contacts[8];
};


int	check_command(std::string s);

#endif