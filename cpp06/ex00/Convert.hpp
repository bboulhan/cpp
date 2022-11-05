/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:16:21 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/04 17:50:06 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>

class Convert{
	private:
		std::string str;
		int *i;
		char c;
		float *f;
		double *d;
	public:
		Convert();
		Convert(std::string str);
		Convert(const Convert &copy);			
		~Convert();
		Convert &operator=(const Convert &op);
		int *to_int();
		float *to_float();
		char to_char();
		double *to_double();
		void printConvert();
		void convertALL();

};





#endif