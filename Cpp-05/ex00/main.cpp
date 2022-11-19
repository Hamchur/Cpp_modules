/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:07:05 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	Bureaucrat *test1 = nullptr;
	try
	{
		test1 = new Bureaucrat("test1", 100);
		std::cout << test1->getName() << std::endl;
	}
	catch (std::exception& tests)
	{
		std::cout << tests.what() << std::endl;
	}
	delete test1;
	Bureaucrat test2 = Bureaucrat("test2", 150);
	std::cout << test2.getName() << std::endl;
	try
	{
		test2.gradeDown();
	} 
	catch(const std::exception& tests)
	{
		std::cout << tests.what() << std::endl;
	}
	Bureaucrat test3("test3", 1);
	std::cout << test3.getName() << std::endl;
	try 
	{
		test3.gradeUp();
	}
	catch(const std::exception& tests) 
	{
		std::cout << tests.what() << std::endl;
	}
}