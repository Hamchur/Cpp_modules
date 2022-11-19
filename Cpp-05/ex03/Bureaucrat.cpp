/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:08:08 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : Name("Default")
{
    gradeSet(150);
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): Name(name)
{
    gradeSet(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &source): Name(source.Name), Grade(source.Grade)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &other)
{
    std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
    if (this == &other)
    {
		return *this;
	}
    this->Grade = other.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
    return (this->Name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->Grade);
}

void Bureaucrat::gradeUp(void)
{
    gradeSet(Grade - 1);
}

void Bureaucrat::gradeDown(void)
{
    gradeSet(Grade + 1);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade() << ".";
	return out;
}

void Bureaucrat::gradeSet(int grade)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    Grade = grade;
}

void Bureaucrat::signForm(Form& Form)
{
    if (Form.isSigned())
    {
        std::cout << Form.getName() << " already signed " << std::endl;
        return;
    }
    try
    {
        Form.beSigned(*this);
        std::cout << Name << " signed " << Form.getName() << std::endl;
    }
    catch(const std::exception& tests)
    {
        std::cout << Name << " couldn't sign " << Form.getName() << std::endl;
        std::cout << "Because " << std::endl;
        std::cout << tests.what() << std::endl;
    }
    
}

void Bureaucrat::executeForm(Form const & form)
{
    try 
    {
        if (form.isSigned())
        {
            form.execute(*this);
            std::cout << Name << " executed " << form.getName() << "." << std::endl;
        }
        else
            std::cout << "Form isn't signed" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << Name << " couldn't execute " << form.getName() << std::endl;
        std::cout << "Because" << std::endl;
        std::cout << e.what() << std::endl;
    }
}