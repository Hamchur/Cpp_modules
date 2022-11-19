/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:07:38 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Form.hpp"
#include <iostream>

Form::Form(void) : Name("Default"), IsSigned(false), GradeSigned(150), GradeExecuted(150)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExecuted): Name(name), IsSigned(false), GradeSigned(gradeSign), GradeExecuted(gradeExecuted)
{
    if (gradeSign > 150 || gradeExecuted > 150)
        throw Form::GradeTooHighException();
    else if (gradeSign < 1 || gradeExecuted < 1)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &source): Name(source.getName()), IsSigned(false), GradeSigned(source.getGradeToSign()), GradeExecuted(source.getGradeToExecute())
{
    std::cout << "Form Copy constructor called" << std::endl;
}

Form &Form::operator = (Form const &other)
{
    std::cout << "Form Copy assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

Form::~Form()
{
    //std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName(void) const
{
    return (this->Name);
}

int Form::getGradeToSign(void) const
{
    return (this->GradeSigned);
}

int Form::getGradeToExecute(void) const
{
    return (this->GradeExecuted);
}

bool Form::isSigned(void) const
{
	return (this->IsSigned);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if(GradeSigned < bureaucrat.getGrade())
        throw Form::GradeTooLowException();
    IsSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char* Form::ExecuteException::what() const throw()
{
	return ("Form must be signed to be executed");
}

std::ostream& operator<<(std::ostream& out, const Form& Form)
{
	out << Form.getName() << " grade to be signed " << Form.getGradeToSign()
		<< ", grade to be executed " << Form.getGradeToExecute() << ". "
		<< "Status: " << (Form.isSigned() ? "signed" : "not signed");
	return out;
}