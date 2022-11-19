/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:08:34 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5)
{
	Target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &other ) : Form("PresidentialPardonForm", 25, 5)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &other )
{
	this->Target = other.Target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute( const Bureaucrat &executor ) const
{
	if (!this->isSigned()) {
		std::cout << "Form not signed." << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException();
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "Oh, shit " << Target << " has been sorryed by Zaphod Beeblebrox." << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}
