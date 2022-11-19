/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:23:22 by hamchur           #+#    #+#             */
/*   Updated: 2022/05/27 15:23:24 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::Add()
{
	std::cout << "\x1B[36mFirst name: \033[0m";
	getline(std::cin, FirstName);
	std::cout << "\x1B[36mLast name: \033[0m";
	getline(std::cin, LastName);
	std::cout << "\x1B[36mNick name: \033[0m";
	getline(std::cin, NickName);
	std::cout << "\x1B[36mPhone number: \033[0m";
	getline(std::cin, PhoneNumber);
	std::cout << "\x1B[36mDarkest secret: \033[0m";
	getline(std::cin, DarkestSecret);
}

std::string Contact::StrReduction(std::string str)
{
	std::string tmp;

	if (str.size() > Wide)
	{
		str[9] = '.';
		tmp = str.substr(0, Wide);
		str = tmp;
	}
	return (str);
}

void Contact::GetInfo(int index)
{
	std::cout << std::endl;
	std::cout << "|" << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << StrReduction(FirstName);
	std::cout << "|" << std::setw(10) << StrReduction(LastName);
	std::cout << "|" << std::setw(10) << StrReduction(NickName) << "|";
}