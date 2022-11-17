/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:38:25 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/03 16:42:52 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {   
		std::cout << "Parametre Error" << std::endl;
		return 0;
	}
    Harl ibra;
    ibra.complain(av[1]);
}