/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:02:33 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/04 18:44:34 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct t_Data{
	std::string login;
	std::string name;
} Data;


uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data *ptr = new Data;
	ptr->login = "bboulhan";
	ptr->name = "brahim";
	
	Data *ptr2;
	uintptr_t j;
	
	j = serialize(ptr);
	ptr2 = deserialize(j);
	std::cout << ptr2->login << "\t" << ptr2->name ;
}