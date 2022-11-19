/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:08:47 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
					Form("ShrubberyCreationForm", 145, 137), Target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &toCopy) :
					Form("ShrubberyCreationForm", 145, 137)
{
	*this = toCopy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &toCopy)
{
	this->Target = toCopy.getTarget();
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw Form::ExecuteException();
	else if (executor.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	else
	{
		std::string fullName;
		fullName = this->Target + "_shruberry";
		std::ofstream file(fullName);
		file << ASCII_TREE;
		std::cout << "Form " << this->getName() << " was executed succesfully!" << std::endl;
		file.close();
	}
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return (this->Target);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}