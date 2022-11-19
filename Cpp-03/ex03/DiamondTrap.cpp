/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:03:04 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "DiamondTrap.hpp"
#include <ctime>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->Name = name;
	ClapTrap::Name = name + "_clap_name";
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) : ClapTrap(toCopy)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap &toCopy)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->Name = toCopy.getName();
	this->HitPoints = toCopy.getHitPoints();
	this->EnergyPoints = toCopy.getEnergyPoints();
	this->AttackDamage = toCopy.getAttackDamage();
	return (*this);
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap Name: \033[3;47;35m" << this->Name << "\033[0m"  << std::endl;
	std::cout << "ClapTrap Name: \033[2;47;35m" << ClapTrap::Name << "\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    if (HitPoints < 1)
        std::cout << "\x1B[31mDiamondTrap " << this->Name << " die\033[0m" << std::endl;
    else
        std::cout << "\x1B[32mDiamondTrap " << this->Name << " isn't die\033[0m" << std::endl;
	std::cout << "DiamondTrap destructor called" << std::endl;
}