/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:20:15 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/19 16:57:15 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int  main()
{
    std::ofstream sh;
    std::string s;
    sh.open("hey.txt");
    std::cout << "enter your name : ";
    std::cin >> s;
    sh << s << std::endl;
    std::cout << "enter your age : ";
    std::cin >> s;
    sh << s << std::endl;
    sh.close();
    std::ifstream ab;
    ab.open("hey.txt");
    std::cout << "reading file\n";
    ab >> s;
    std::cout << s << std::endl;
    ab >> s;
    std::cout << s << std::endl;
    ab.close();
}

