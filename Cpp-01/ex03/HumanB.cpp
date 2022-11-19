/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 12:57:19 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->z_name = name;
	this->z_weapon = nullptr;
}

void HumanB::setName(std::string name)
{
    this->z_name = name;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
    this->z_weapon = &newWeapon;
}

void HumanB::attack(void)
{
    if (this->z_weapon)
        std::cout << this->z_name << " attacks with his " << z_weapon->getType() << std::endl;
    else
        std::cout << this->z_name << " has no weapon" << std::endl;
}

HumanB::~HumanB(void)
{
}