/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:00:43 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed &source)
{
	*this = source;
}

Fixed::Fixed(const int value)
{
	this->fixedPoint = value << this->bitsNumber;
}

Fixed::Fixed(const float value)
{
	this->fixedPoint = roundf(value * (1 << this->bitsNumber));
}

Fixed::~Fixed()
{
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

Fixed	&Fixed::operator=(const Fixed &other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator++(void)
{
	this->fixedPoint++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->fixedPoint--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return (this->toFloat() / other.toFloat());
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->toFloat() != other.toFloat());
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &val)
{
    out << val.toFloat();
    return (out);
}
