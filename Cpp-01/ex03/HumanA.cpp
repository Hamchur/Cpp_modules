/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 12:57:09 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : z_weapon(weapon)
{
	this->z_name = name;
}

void HumanA::setName(std::string name)
{
	this->z_name = name;
}

void HumanA::attack(void)
{
	std::cout << this->z_name << " attacks with his " << this->z_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
}