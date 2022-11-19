/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 12:57:26 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string z_name;
		Weapon		*z_weapon;

	public:
		HumanB(std::string name);
		void setName(std::string name);
		void setWeapon(Weapon& newWeapon);
		void attack();
		~HumanB(void);
};

#endif
