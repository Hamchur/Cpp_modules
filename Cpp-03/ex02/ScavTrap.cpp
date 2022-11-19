/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:02:42 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &toCopy)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->Name = toCopy.getName();
	this->HitPoints = toCopy.getHitPoints();
	this->EnergyPoints = toCopy.getEnergyPoints();
	this->AttackDamage = toCopy.getAttackDamage();
	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->Name << " \033[3;44;30mattacks " << target;
	std::cout << " causing " << this->AttackDamage << " points of damage\033[0m" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->Name << " \x1B[36mis now in Gatekeeper mode\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
    if (HitPoints < 1)
        std::cout << "ScavTrap " << this->Name << " \x1B[31mdie\033[0m" << std::endl;
    else
        std::cout << "ScavTrap " << this->Name << " \x1B[32misn't die\033[0m" << std::endl;
	std::cout << "ScavTrap destructor called" << std::endl;
}