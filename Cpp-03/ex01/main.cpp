/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:01:50 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	std::cout << "=======================================" << std::endl;
	{
		ScavTrap Demon("Demon");
		Demon.attack("Zritel1");
		Demon.takeDamage(66);
		Demon.beRepaired(44);
		Demon.takeDamage(22);
		Demon.guardGate();
		Demon.beRepaired(11);
		Demon.takeDamage(33);
	}
	std::cout << "=======================================" << std::endl;
	{
		ClapTrap Android("Android");
		Android.attack("Zritel2");
		Android.takeDamage(2);
		Android.beRepaired(6);
		Android.takeDamage(6);
		Android.beRepaired(1);
		Android.takeDamage(10);
	}
    std::cout << "=======================================" << std::endl;
	return (0);
}