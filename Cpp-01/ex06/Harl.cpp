/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 12:59:11 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for" 
		" my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
		" You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNINGS ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." 
		" I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

int Harl::getLevel( std::string level )
{
	int i;
	std::string complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (level == complaints[i])
			break;
 	}
	return (i);
}

void Harl::complain( std::string level )
{
	int levelNum;
	void (Harl::*Pointer[4])(void);
	Pointer[0] = &Harl::debug;
	Pointer[1] = &Harl::info;
	Pointer[2] = &Harl::warning;
	Pointer[3] = &Harl::error;
	levelNum = getLevel(level);
	switch(levelNum)
	{
		case 0:
			(this->*Pointer[0])();
		case 1:
			(this->*Pointer[1])();
		case 2:
			(this->*Pointer[2])();
		case 3:
			(this->*Pointer[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

Harl::~Harl()
{
}