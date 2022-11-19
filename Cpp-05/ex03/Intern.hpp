/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:08:24 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		std::string Names[3];
		Form* (Intern::*F[3])(const std::string& target);
		Form* newPresidentialPardonForm(const std::string& target);
		Form* newRobotomyRequestForm(const std::string& target);
		Form* newShrubberyCreationForm(const std::string& target);
	
	public:
		Intern(void);
		Intern(const Intern &source);
		Intern &operator = (Intern const &other);
		~Intern();

		Form* makeForm( const std::string& name, const std::string& target);
};

#endif
