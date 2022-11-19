/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:03:09 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "FragTrap.hpp"
#include <ctime>

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->Name = "";
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

FragTrap& FragTrap::operator = (const FragTrap &toCopy)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->Name = toCopy.getName();
	this->HitPoints = toCopy.getHitPoints();
	this->EnergyPoints = toCopy.getEnergyPoints();
	this->AttackDamage = toCopy.getAttackDamage();
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	srand(time(NULL));
	int i = rand();
	if (i % 2 == 1)
	{
		std::cout << "\x1B[31mOOh Nooo, that handshake has infected you. Your HitPoints have dropped(-50)\033[0m" << std::endl;
		this->HitPoints -= 50;
	}
	else
		std::cout << "\x1B[32mYeaah, it was the GREAT handshake\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
    if (HitPoints < 1)
        std::cout << "FragTrap " << this->Name << " \x1B[31mdie\033[0m" << std::endl;
    else
        std::cout << "FragTrap " << this->Name << " \x1B[32misn't die\033[0m" << std::endl;
	std::cout << "FragTrap destructor called" << std::endl;
}