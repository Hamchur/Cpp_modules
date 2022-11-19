/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:01:30 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) 
{
    ClapTrap chel("Chel");

    chel.attack("microChel");
    chel.takeDamage(5);
    chel.beRepaired(4);
    chel.takeDamage(3);
    chel.beRepaired(2);
    chel.takeDamage(11);
    
    return 0;
}