/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 14:30:18 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	std::string str = argv[1];
	Conversion Conv(str);
	Conv.printChar();
	Conv.printInt();
	Conv.printFloat();
	Conv.printDouble();
}