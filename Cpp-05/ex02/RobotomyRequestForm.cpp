/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:07:55 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	Target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form("RobotomyRequestForm", 72, 45) 
{
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) 
{
	this->Target = other.Target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const 
{
	if (!this->isSigned()) {
		std::cout << "Form not signed." << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException();
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "*Zvuki sverleniya*" << std::endl;
	srand(time(NULL));
	if (rand() % 2) {
		std::cout << Target << " has been robotomized successfully." << std::endl;
	} else {
		std::cout << "Robotomy failed on " << Target << "." << std::endl;
	}
	std::cout << "----------------------------------------" << std::endl;
}
