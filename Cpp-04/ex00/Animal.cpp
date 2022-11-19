/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:03:45 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Animal.hpp"

Animal::Animal(void) :Type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) :Type(type)
{
    std::cout << "Animal name constructor called" << std::endl;
}

Animal::Animal(const Animal &source)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = source;
}

Animal &Animal::operator = (Animal const &other)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    this->Type = other.getType();
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::setType(std::string type)
{
    this->Type = type;
}

const std::string &Animal::getType(void) const
{
    return(this->Type);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal makes a sound" << std::endl;
}