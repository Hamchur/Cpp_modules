/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:06:59 by hamchur          ###   ########.fr       */
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
		<< bureaucrat.getGrade() << "." << std::endl;
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