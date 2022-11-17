/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:24:21 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/11 18:51:54 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
   
    int z = 0;
	Animal *a[4];
	
    while (z < 2)
        a[z++] = new Dog();
    while (z < 4)
        a[z++] = new Cat();
   
    z = 0;
    while (z < 4)
        delete a[z++];
    
    Dog x;
    Dog k;
    Cat y;
    Cat p;

    k = x;
    p = y;
	
    return 0;

}