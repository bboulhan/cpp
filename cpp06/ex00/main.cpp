/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:19:19 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/04 17:44:31 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


int main(int ac, char **av)
{

	if (ac != 2)
	{	std::cout << "Param Error" << std::endl;
		return 0;
	}
	Convert test(av[1]);
	test.convertALL();
	test.printConvert();
	
}