/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:23:35 by hamchur           #+#    #+#             */
/*   Updated: 2022/05/27 15:23:37 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	PB;
	int			ContactCount;
	std::string		input;

	ContactCount = 1;
	while (input != "EXIT")
	{
		std::cout << "\x1B[37mChoose a command: ADD, SEARCH, EXIT \033[0m";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			PB.AddContact(ContactCount);
			std::cout << "\x1B[32mContact added\033[0m" << std::endl;
			ContactCount++;
			if (ContactCount == 9)
				ContactCount = 1;
		
		}
		else if (input == "SEARCH")
		{
			std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nick name" << "|";
			PB.SearchContact();
			std::cout << std::endl;
		}
		else
		{
			if (input != "EXIT")
				std::cout << "\x1B[31mWrong command\033[0m" << std::endl;
		}
	}
	std::cout << "\033[3;47;35mSee you later!\033[0m" << std::endl;
	return (0);
}
