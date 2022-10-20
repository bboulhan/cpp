/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:05:39 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/20 19:29:57 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

Files::Files(std::string filename, std::string s1, std::string s2)
{
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

Files::~Files()
{
	
}

void    Files::setFile(std::string filename)
{
	this->filename = filename;
}

std::string Files::getFile()
{
	return (this->filename);
}

void Files::Replace()
{
	std::string data;
	std::string tmp;
	std::ifstream oldFile;
	std::size_t	found;
	std::string fileName = this->filename + ".replace";
	std::size_t i = 0;
	
	oldFile.open(this->filename);
	std::getline(oldFile, tmp);
	while (!tmp.empty())
	{	
		data += tmp;
		data += '\n';
		std::getline(oldFile, tmp);
	}
	// if (data[data.length() - 1] == '\n')
	// 	data[data.length() - 1] = 0;
	
	std::size_t j = data.rfind(s1);
	if (j > data.length())
		this->Error();
	while (i <= j)
	{
		found = data.find(s1, i);
		if (found > data.length())
			this->Error();
		data.erase(found, this->s1.length());
		data.insert(found, this->s2);
		i = found + 1;
	}
	
	oldFile.close();
	std::ofstream newFile;
	newFile.open(fileName);
	newFile << data;
	newFile.close();
}

void	Files::Error()
{
	std::cout << "string s2 not found in " << this->filename << std::endl;
	exit(0);
}

