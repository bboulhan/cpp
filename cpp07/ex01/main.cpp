/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:04:36 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/15 19:18:48 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// void call(const int &a)
// {
// 	std::cout << a << std::endl;
// }

// int main()
// {
// 	int *n = new int[5];
// 	for(int i = 0;i < 5;i++){
// 		n[i] = i + 1;
// 	}
// 	int tab[5] = {10,11,12,13,14};
// 	iter(tab, 5, call);

// }

class Awesome 
{
	public: 
	Awesome( void ) : _n( 42 ) { return; } 
	int get( void ) const { return this->_n; } 
	private: 
	int _n; 
}; 

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; } 

template< typename T > 

void print( T const & x ) { std::cout << x << std::endl; return; } 

int main() { 
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5]; 
	iter( tab, 5, print ); 
	iter( tab2, 5, print ); 
	return 0; 
}