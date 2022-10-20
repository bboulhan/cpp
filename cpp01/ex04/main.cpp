/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:55:30 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/20 19:16:40 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {    
        std::cout << "Parametres Error" << std::endl;
        exit(0);
    }
    std::string name = av[1];
    std::string content = av[2];
    std::string replacement = av[3];
    Files file = Files(name, content, replacement);
    file.Replace();
    
    
}