/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:04:27 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/20 19:16:57 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>

class Files{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
        
    public:
        Files(std::string filename, std::string s1, std::string s2);
        ~Files();
        void setFile(std::string filename);
        std::string getFile();
        void Replace();
        void Error();
};



#endif