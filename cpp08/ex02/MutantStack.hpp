/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:24:39 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/16 19:39:35 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>


template <class T, class stack = std::deque<T> >

class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack(const MutantStack<T> &copy){ 
			*this = copy; 
		}
		MutantStack<T> &operator=(const MutantStack<T> &op)
		{
			this->c = op.c;
			return *this;
		}
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};



#endif