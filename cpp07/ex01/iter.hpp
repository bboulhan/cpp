/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:24:40 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/05 16:08:50 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename adress>

void iter(adress* array, size_t size, void (*f)(const adress &))
{
	size_t i = -1;
	while (++i < size)
		f(array[i]);
}


#endif