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

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieHorde[i].giveName(name);
	return (zombieHorde);
}
