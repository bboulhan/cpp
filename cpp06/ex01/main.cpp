/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:02:33 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/15 19:07:28 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	Data *ptr = new Data;
	ptr->login = "bboulhan";
	ptr->name = "brahim";
	
	Data *ptr2;
	uintptr_t j;
	
	j = serialize(ptr);
	ptr2 = deserialize(j);
	std::cout << ptr2->login << "\t" << ptr2->name << std::endl;
}