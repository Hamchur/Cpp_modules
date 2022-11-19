/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:05:37 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Dog.hpp"

Dog::Dog(void)
{
    this->Type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(Dog const &source)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->brain = new Brain(*source.brain);
    this->Type = source.getType();
}

Dog &Dog::operator = (Dog const &other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    this->brain = new Brain(*other.brain);
    this->Type = other.getType();
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog makes a sound - woof woof" << std::endl;
}

Brain& Dog::getBrain() const
{
	return (*this->brain);
}