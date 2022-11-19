/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:05:32 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Cat.hpp"

Cat::Cat(void)
{
    this->Type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat &source)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->brain = new Brain(*source.brain);
    this->Type = source.getType();
}

Cat &Cat::operator = (Cat const &other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    this->brain = new Brain(*other.brain);
    this->Type = other.getType();
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound(void) const
{
   std::cout << "Cat makes a sound - meow meow" << std::endl;
}

Brain& Cat::getBrain() const
{
	return (*this->brain);
}