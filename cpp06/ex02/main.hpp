/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:08:59 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/15 19:09:51 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <cstdlib>

class Base{
	public:
		virtual ~Base();
};

class A : public Base{
};

class B : public Base{
};

class C : public Base{	
};

Base::~Base(){	
}

Base *generate(){
	srand((unsigned)time(0)); 
    int i = (rand()%3);
	Base *base;
	if (i == 0){
		A *a = new A;
		base = static_cast<Base*>(a);
		return (base);
	}
	else if(i == 1){
		B *b = new B;
		base = static_cast<Base*>(b);
		return (base);
	}
	else{
		C *c = new C;
		base = static_cast<Base*>(c);
		return (base);
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(...)
	{
		try{
			B &b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
			(void)b;
		}
		catch(...){
			try{
			C &c = dynamic_cast<C&>(p);
			std::cout << "C" << std::endl;
			(void)c;
			}
			catch(...)
			{
				std::cout << "no class" << std::endl;
			}
		}
	}
	
}


#endif