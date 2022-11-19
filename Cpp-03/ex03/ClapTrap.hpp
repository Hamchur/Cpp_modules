/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:03:01 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap (ClapTrap const &source);
		ClapTrap &operator = (ClapTrap const &other);
		~ClapTrap();

		std::string getName(void) const;
		int getHitPoints(void) const;
		int getEnergyPoints(void) const;
		int getAttackDamage(void) const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
