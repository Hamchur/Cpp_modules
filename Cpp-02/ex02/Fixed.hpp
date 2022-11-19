/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:00:47 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed 
{
	private:
		int	fixedPoint;
		int static const	bitsNumber = 8;

	public:
		Fixed();
		Fixed(const Fixed &source);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int	toInt(void) const;
		float	toFloat(void) const;

		Fixed	&operator=(const Fixed &other);
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		const static Fixed	&max(const Fixed &a, const Fixed &b);
		const static Fixed	&min(const Fixed &a, const Fixed &b);
};

std::ostream				&operator<<(std::ostream &out, const Fixed &in);

#endif
