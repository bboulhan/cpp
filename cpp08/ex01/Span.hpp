/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:38:36 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/16 18:20:35 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

class Span{
	private:
		unsigned int N;
		std::vector<int> array;
	public:
		class NoSpaceLeft : public std::exception{
			const char* what() const throw();
		};
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span &copy);
		Span &operator=(const Span &op);
		std::vector<int> getArray() const;
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void oneCall(unsigned int range);
		void randomly_add();
		
};

std::ostream &operator<<(std::ostream &stream, const Span &sp);

#endif