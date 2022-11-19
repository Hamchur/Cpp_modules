/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:03:55 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Dog.hpp"

Dog::Dog(void)
{
    this->Type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &source)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = source;
}

Dog &Dog::operator = (Dog const &other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    this->Type = other.getType();
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog makes a sound - woof woof" << std::endl;
}