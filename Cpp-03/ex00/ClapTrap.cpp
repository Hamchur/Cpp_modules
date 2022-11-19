/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:01:05 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :Name(""), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &source)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = source;
}

ClapTrap &ClapTrap::operator = (ClapTrap const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->Name = other.getName();
    this->HitPoints = other.getHitPoints();
    this->EnergyPoints = other.getEnergyPoints();
    this->AttackDamage = other.getAttackDamage();
    return (*this);
}

ClapTrap::~ClapTrap()
{
    if (HitPoints < 1)
        std::cout << "ClapTrap " << this->Name << " \x1B[31mdie\033[0m" << std::endl;
    else
        std::cout << "ClapTrap " << this->Name << " \x1B[32misn't die\033[0m" << std::endl;
    std::cout << "ClapTrap destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return(this->Name);
}

int ClapTrap::getHitPoints(void) const
{
    return(this->HitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
    return(this->EnergyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
    return(this->AttackDamage);
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->Name << " \033[3;44;30mattacks " << target;
    std::cout << ", causing " << this->AttackDamage << " points of damage!\033[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->EnergyPoints -=amount;
    std::cout << "ClapTrap " << this->Name << " \033[3;41;29mgot " << amount << " points of damage\033[0m" << std::endl;
    if (this->EnergyPoints <= 0)
    {
		this->EnergyPoints = 0;
		std::cout << "ClapTrap " << this->Name << " will die if not repaired" << std::endl;
	}
    this->HitPoints -=amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->EnergyPoints += amount;
    this->HitPoints +=amount;
    std::cout << "ClapTrap " << this->Name << " \033[3;42;30mrepaired " << amount << " hit points\033[0m" << std::endl;
}