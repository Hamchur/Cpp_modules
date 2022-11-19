/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:55:29 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 15:28:37 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Conversion
{
	private:
		int Counts;
		int Dot;
		int Float;
		std::string ar;
		int Numeric(std::string ar);
		
		int i;
		int num;
		float numf;
		double numd;
	
	public:
		Conversion();
		Conversion(std::string ar);
		Conversion (const Conversion &source);
		Conversion &operator = (Conversion const &other);
		~Conversion();

		void printChar();
		void printInt();
		void printFloat();
		void printDouble();
};

#endif
