/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:08:21 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern(void)
{
    std::cout << "Intern default constructor called" << std::endl;
    Names[0] = "Presidential Pardon";
    Names[1] = "Robotomy Request";
    Names[2] = "Shrubbery Creation";
    F[0] = &Intern::newPresidentialPardonForm;
    F[1] = &Intern::newRobotomyRequestForm;
    F[2] = &Intern::newShrubberyCreationForm;
}

Intern::Intern(const Intern &source)
{
    (void) source;
}

Intern &Intern::operator = (Intern const &other)
{
    std::cout << "Intern Copy assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

Intern::~Intern()
{
    //std::cout << "Intern destructor called" << std::endl;
}

Form* Intern::makeForm( const std::string& name, const std::string& target)
{
    int i = 0;

    while (i < 3 && name != Names[i])
        i++;
    if (i == 3)
    {
        std::cout << "Intern can't create form. " << "Form with name \"" << name << "\" doesn't exist." << std::endl;
        return nullptr;
    }
    std::cout << "Intern creates " << name << "." << std::endl;
	return (this->*F[i])(target);
}

Form* Intern::newShrubberyCreationForm(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

Form* Intern::newRobotomyRequestForm(const std::string& target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::newPresidentialPardonForm(const std::string& target) {
	return new PresidentialPardonForm(target);
}
