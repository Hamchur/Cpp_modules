/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:44:12 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 14:00:50 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "ctime"

int main()
{
    Span span = Span(5);
    
    span.addNumber(6);
    span.addNumber(3);
    span.addNumber(17);
    span.addNumber(9);
    span.addNumber(11);

    std::cout << span.shortestSpan() << std::endl;
    std::cout << span.longestSpan() << std::endl;
    std::cout << "Exeption of many numbers in span:" << std::endl;
    try
    {
        span.addNumber(42);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "=========================" << std::endl;
    
    std::cout << "Exeption of no numbers in span" << std::endl;
    
    Span span1 = Span(2);
    
    try
    {
        std::cout << span1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "=========================" << std::endl;
    
    std::cout << "Exeption then span has one number" << std::endl;
    
    Span span2 = Span(2);
    
    span1.addNumber(2);
    
    try
    {
        std::cout << span2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "=========================" << std::endl;
    
    std::cout << "Span has 10000 numbers" << std::endl;
    
    srand(time(NULL));
    Span span3(10000);
	for (int i = 0; i < 10000; i++)
    	span3.addNumber(rand());
		
	std::cout << span3.shortestSpan() << std::endl;
	std::cout << span3.longestSpan() << std::endl;
        
    return 0;
}