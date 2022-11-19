/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:07:42 by hamchur           #+#    #+#             */
/*   Updated: 2022/05/31 17:07:43 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::AddContact(int ContactIndex)
{
	ContactList[ContactIndex].Add();
}

void PhoneBook::SearchContact()
{
	int	index;
	int	i;

	for (i = 1; i < ContactSize; i++)
		ContactList[i].GetInfo(i);
	std::cout << std::endl << "\x1B[37mSelect a contact from the list \033[0m";
	std::cin >> index;
	if (index >= 1 && index <= 8)
	{
		std::cout << std::endl;
		std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nick name" << "|";
		ContactList[index].GetInfo(index);
		std::cout << std::endl;
	}
	else
		std::cout << "\x1B[31mWrong number\033[0m";
}
