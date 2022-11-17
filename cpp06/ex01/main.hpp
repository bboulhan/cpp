/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:06:01 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/15 19:07:09 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

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


#endif