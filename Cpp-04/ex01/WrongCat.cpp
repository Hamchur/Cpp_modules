/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:05:13 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->Type =  "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &source)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = source;
}

WrongCat &WrongCat::operator = (WrongCat const &other)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    this->Type = other.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
   std::cout << "WrongCat makes a sound  - meow meow" << std::endl;
}