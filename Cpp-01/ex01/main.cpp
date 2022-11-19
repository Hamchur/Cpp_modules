/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/06/09 15:59:00 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int NumberZombies;

	NumberZombies = 5;
	Zombie *Horde = zombieHorde(NumberZombies, "Peppa");
	Horde[2].giveName("George");
	for(int i = 0; i < NumberZombies; i++)
		Horde[i].announce();
	delete[] Horde;
	return (0);
}
