/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:15:36 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/05 16:40:28 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>

class Array{
	private:
		T elem;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array &operator=(cnost Array &op);
		
		
}




#endif