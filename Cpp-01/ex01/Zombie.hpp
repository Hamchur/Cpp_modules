/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:59:20 by hamchur           #+#    #+#             */
/*   Updated: 2022/06/09 15:59:22 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string z_name;
	public:
		Zombie();
		~Zombie(void);
		void giveName(std::string name);
		std::string getName(void);
		void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
