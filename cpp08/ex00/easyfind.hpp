/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:54:12 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/16 10:34:26 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <forward_list>
#include <array>
#include <deque>
#include <vector>
#include <list>


class NotFound : public std::exception{
	const char* what() const throw(){
		return ("Not Found");
	}
};


template<class T>

void easyfind(T array, int i)
{
	if (std::find(array.begin(), array.end(), i) == array.end())
		throw (NotFound());
	std::cout << "the number : " << i << " is found" << std::endl;
}



#endif