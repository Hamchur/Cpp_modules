/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 12:58:44 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for" 
		" my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money."
		" You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free." 
		" I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*Pointer[4])(void);
	Pointer[0] = &Harl::debug;
	Pointer[1] = &Harl::info;
	Pointer[2] = &Harl::warning;
	Pointer[3] = &Harl::error;
	std::string complaints[4] = {"debug", "info", "warnings", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (level == complaints[i])
			return (this->*Pointer[i])();
 	}
	std::cout << "Hello everyone!" << std::endl;
}

Harl::~Harl()
{
}