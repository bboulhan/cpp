/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:21:09 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/06 13:54:47 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j = 0;

    if (ac == 1)
    {    
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (1);
    }    
    while (av[++j])
    {
        i = -1;
        while (av[j][++i])
        {
            if (av[j][i] >= 97 && av[j][i] <= 122)
                av[j][i] = toupper(av[j][i]);
            std::cout << av[j][i];
        }
    }
    return 0;
}
