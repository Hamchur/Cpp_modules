/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 12:58:28 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replace(std::string s1, std::string s2, std::string fullText, std::string fileName)
{
	std::fstream	fileReplace;
	std::string		replace;
	int index;

	index = 0;
	while((index = fullText.find(s1, index)) != -1)
	{
		fullText.erase(index, s1.length());
		fullText.insert(index, s2);
		index += s2.length();
	}
	fileReplace.open(fileName + ".replace", std::ios::out);
	if (!fileReplace)
		std::cout << "error\nCan't create file: " + fileName + ".replace" << std::endl;
	fileReplace << fullText;
}

std::string getText(std::string fileName, std::string *fullText)
{
	std::fstream	file;
	std::string		line;

	file.open(fileName, std::ios::in);
	if (!file)
	{
		std::cout << "error\nCan't open file: " + fileName << std::endl;
		return (*fullText);
	}
	while(std::getline(file, line))
	{
		(*fullText).append(line);
		if (!file.eof())
			(*fullText).push_back('\n');
	}
	file.close();
	return (*fullText);
}

int main(int argc, char **argv)
{
	std::string	fullText;
	std::string	fileName;
	std::string	s1;
	std::string	s2;

	if (argc == 4)
	{
		s1 = argv[2];
		s2 = argv[3];
		if (s1.empty() || s2.empty())
		{
			std::cout << "error\n<s1> or <s2> are empty strings" << std::endl;
			return (1);
		}
		fileName = argv[1];
		getText(fileName, &fullText);
		if (fullText.empty())
			return (1);
		replace(s1, s2, fullText, fileName);
	}
	else
		std::cout << "error\nPlease, write: ./replace <filename> <s1> <s2>" << std::endl;
	return (0);
}