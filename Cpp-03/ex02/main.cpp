/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:02:33 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	std::cout << "=======================================" << std::endl;
	{
		FragTrap Tom("Tom");
		Tom.attack("Mysterio");
		Tom.takeDamage(72);
		Tom.beRepaired(96);
		Tom.takeDamage(78);
		Tom.highFivesGuys();
		Tom.beRepaired(48);
		Tom.takeDamage(57);
	}
	std::cout << "=======================================" << std::endl;
	{
		ScavTrap Andrew("Andrew");
		Andrew.attack("Electro");
		Andrew.takeDamage(66);
		Andrew.beRepaired(44);
		Andrew.takeDamage(22);
		Andrew.guardGate();
		Andrew.beRepaired(11);
		Andrew.takeDamage(33);
	}
	std::cout << "=======================================" << std::endl;
	{
		ClapTrap Tobey("Tobey");
		Tobey.attack("Sandman");
		Tobey.takeDamage(2);
		Tobey.beRepaired(6);
		Tobey.takeDamage(6);
		Tobey.beRepaired(1);
		Tobey.takeDamage(10);
	}
    std::cout << "=======================================" << std::endl;
	return (0);
}