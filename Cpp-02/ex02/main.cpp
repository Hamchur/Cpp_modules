/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:00:53 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "a / b: " << a / b << std::endl;
	std::cout << "42.5 / 21.14: " << Fixed(42.5f) / Fixed(21.14f) << std::endl;
	std::cout << "a * b: " << a * b << std::endl;
	std::cout << "42.42 * 21.21: " << Fixed(42.42f) * Fixed(21.21f) << std::endl;
	std::cout << "a + b: " << a + b << std::endl;
	std::cout << "a - b: " << a - b << std::endl;

    return 0;
}