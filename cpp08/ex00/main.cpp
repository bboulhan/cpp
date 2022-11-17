/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:02:43 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/16 19:45:26 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
	try
	{
		std::vector<int> arr;
		arr.push_back(11);
		arr.push_back(12);
		arr.push_back(13);
		arr.push_back(14);
		arr.push_back(15);
		easyfind(arr, 0);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}