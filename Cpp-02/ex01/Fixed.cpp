/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:00:01 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed &source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed			&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = value << this->bitsNumber;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(value * (1 << this->bitsNumber));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

int	Fixed::toInt(void) const
{
    return ((int)(this->fixedPoint >> this->bitsNumber));
}

float	Fixed::toFloat(void) const
{
    return ((float)(this->fixedPoint) / (1 << this->bitsNumber));
}

std::ostream	&operator<<(std::ostream &out, const Fixed &val)
{
    out << val.toFloat();
    return (out);
}