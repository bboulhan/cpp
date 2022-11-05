/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:42:46 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/05 14:18:17 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename type>

void swap(type &a, type &b)
{
	type t;
	t = a;
	a = b;
	b = t;
}

template<typename type>

type min(type a, type b)
{
	if (a < b)
		return a;
	return b;
}

template<typename type>

type max(type a, type b)
{
	if (a > b)
		return a;
	return b;
}

#endif