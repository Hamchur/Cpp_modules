/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:07:43 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int main() {
	Bureaucrat Test1("Test1", 150);
	Bureaucrat Test2("Test2", 1);

	Form *Test3 = new ShrubberyCreationForm("Home");
	Form *Test4 = new RobotomyRequestForm("Sosed");
	Form *Test5 = new PresidentialPardonForm("Steve Rambo");
	Test1.signForm(*Test3);
	Test1.executeForm(*Test3);

	Test2.signForm(*Test3);
	Test1.executeForm(*Test3);
	Test2.signForm(*Test4);
	Test2.signForm(*Test5);

	Test2.executeForm(*Test3);
	Test2.executeForm(*Test4);
	Test2.executeForm(*Test5);

	delete Test3;
	delete Test4;
	delete Test5;
}

// int main(void)
// {
// 	/* Create the 3 forms and some Bureaucrats */

// 	ShrubberyCreationForm shrubbery("Home");
// 	RobotomyRequestForm robotomy("Morty");
// 	PresidentialPardonForm pardon("Rick Sanchez");
// 	Bureaucrat mike("Mike", 150);
// 	Bureaucrat jon("Jon", 120);
// 	Bureaucrat steve("Steve", 3);
	
// 	/* Try to execute forms without being signed */
// 	{
// 		try
// 		{
// 			std::cout << mike << std::endl;
// 			std::cout << shrubbery << std::endl;
// 			std::cout << robotomy << std::endl;
// 			std::cout << pardon << std::endl;
// 			mike.executeForm(shrubbery);
// 			mike.executeForm(robotomy);
// 			mike.executeForm(pardon);
// 		}
// 		catch (std::exception &e)
// 		{
// 			std::cout << e.what() << std::endl;
// 		}
// 	}

// 	std::cout << "=============================================\n";
	
// 	/* Sign form and try to execute without enough grade */
// 	{
// 		try
// 		{
// 			std::cout << mike << std::endl;
// 			std::cout << jon << std::endl;
// 			std::cout << shrubbery << std::endl;
// 			std::cout << robotomy << std::endl;
// 			std::cout << pardon << std::endl;
// 			shrubbery.beSigned(jon);
// 			mike.executeForm(shrubbery);
// 		}
// 		catch (std::exception &e)
// 		{
// 			std::cout << e.what() << std::endl;
// 		}
// 	}

// 	std::cout << "=============================================\n";
	
// 	/* Sign forms and execute them */
// 	{
// 		try
// 		{
// 			robotomy.beSigned(steve);
// 			pardon.beSigned(steve);
// 			std::cout << shrubbery << std::endl;
// 			std::cout << robotomy << std::endl;
// 			std::cout << pardon << std::endl;
			
// 			std::cout << "=============================================\n";
// 			steve.executeForm(shrubbery);
// 			std::cout << "=============================================\n";
// 			steve.executeForm(robotomy);
// 			std::cout << "=============================================\n";
// 			steve.executeForm(pardon);
// 		}
// 		catch (std::exception &e)
// 		{
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
// 	return (0);
// }