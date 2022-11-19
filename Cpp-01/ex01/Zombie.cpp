/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:59:13 by hamchur           #+#    #+#             */
/*   Updated: 2022/06/09 15:59:15 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::giveName(std::string name)
{
	this->z_name = name;
}

std::string Zombie::getName(void)
{
	return (this->z_name);
}

void Zombie::announce()
{
	std::cout << this->z_name << ": BraiiiiiiinnnzzzZ..." <<  std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << z_name << ": was destroyed" << std::endl;
}
