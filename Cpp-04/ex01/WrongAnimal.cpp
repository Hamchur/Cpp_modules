/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:05:06 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) :Type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) :Type(type)
{
    std::cout << "WrongAnimal name constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &source)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = source;
}

WrongAnimal &WrongAnimal::operator = (WrongAnimal const &other)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    this->Type = other.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

const std::string &WrongAnimal::getType(void) const
{
    return(this->Type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal makes a sound" << std::endl;
}