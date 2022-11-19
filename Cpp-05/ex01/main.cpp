/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:07:23 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

// int main(void)
// {
// 	/* too high grade*/
// 	{
// 		try
// 		{
// 			Form test1("test1", 0, 5);
// 			std::cout << test1 << std::endl;
// 		}
// 		catch(std::exception &e)
// 		{
// 			std::cerr << e.what() << std::endl;
// 		}
		
// 	}

// 	std::cout << "--------------------- \n";

// 	/* signed form */
// 	{
// 		try
// 		{
// 			Bureaucrat test2("test2", 15);
// 			Form form1("form1", 20, 45);
// 			std::cout << test2 << std::endl;
// 			std::cout << form1 << std::endl;
// 			form1.beSigned(test2);
// 			std::cout << form1 << std::endl;
// 		}
// 		catch (std::exception &e)
// 		{
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
	
// 	std::cout << "--------------------- \n";

// 	/* didnt signed form */
// 	{
// 		try
// 		{
// 			Bureaucrat form1("form1", 35);
// 			Form form2("form2", 20, 45);
// 			std::cout << form1 << std::endl;
// 			std::cout << form2 << std::endl;
// 			form2.beSigned(form1);
// 			std::cout << form2 << std::endl;
// 		}
// 		catch (std::exception &e)
// 		{
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
// 	return (0);
// }



int main() 
{
	Bureaucrat test1("test1", 15);
	Bureaucrat test2("test2", 1);

	Form form1("form1", 150, 150);
	Form form2("form2", 1, 1);
	std::cout << "===================================" << std::endl;
	try 
	{
		Bureaucrat test3("test3", 150);
		Form form3("form3", 15, 15);
		test3.signForm(form3);
		std::cout << form3 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "===================================" << std::endl;
	try 
	{
		Bureaucrat test4("test4", 11);
		Form form4("form4", 11, 11);
		test4.signForm(form4);
		std::cout << form4 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "===================================" << std::endl;
	test1.signForm(form1);
	test1.signForm(form2);

	test2.signForm(form1);
	test2.signForm(form2);
	std::cout << test1 << std::endl;
	std::cout << test2 << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << "===================================" << std::endl;
}