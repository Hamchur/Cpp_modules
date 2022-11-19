/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:03:14 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	std::cout << "=======================================" << std::endl;
	{
		DiamondTrap Athos("Athos");
		Athos.attack("First enemy");
		Athos.takeDamage(10);
		Athos.beRepaired(41);
		Athos.takeDamage(37);
		Athos.guardGate();
		Athos.highFivesGuys();
		Athos.whoAmI();
		Athos.beRepaired(36);
		Athos.takeDamage(82);
	}
	std::cout << "=======================================" << std::endl;
	{
		FragTrap Porthos("Porthos");
		Porthos.attack("Second enemy");
		Porthos.takeDamage(72);
		Porthos.beRepaired(96);
		Porthos.takeDamage(78);
		Porthos.highFivesGuys();
		Porthos.beRepaired(48);
		Porthos.takeDamage(57);
	}
	std::cout << "=======================================" << std::endl;
	{
		ScavTrap Aramis("Aramis");
		Aramis.attack("Third enemy");
		Aramis.takeDamage(66);
		Aramis.beRepaired(44);
		Aramis.takeDamage(22);
		Aramis.guardGate();
		Aramis.beRepaired(11);
		Aramis.takeDamage(33);
	}
	std::cout << "=======================================" << std::endl;
	{
		ClapTrap D_Artagnan("D_Artagnan");
		D_Artagnan.attack("Fourth enemy");
		D_Artagnan.takeDamage(2);
		D_Artagnan.beRepaired(6);
		D_Artagnan.takeDamage(6);
		D_Artagnan.beRepaired(1);
		D_Artagnan.takeDamage(10);
	}
    std::cout << "=======================================" << std::endl;
	return (0);
}