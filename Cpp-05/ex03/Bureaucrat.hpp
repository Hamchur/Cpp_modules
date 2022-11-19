/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:08:10 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string Name;
		int Grade;
		
		void gradeSet(int grade);
	
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat (const Bureaucrat &source);
		Bureaucrat &operator = (Bureaucrat const &other);
		~Bureaucrat();

		std::string getName(void) const;
		int getGrade(void) const;
		void gradeUp(void);
		void gradeDown(void);

		void signForm(Form& Form);
		void executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& in);

#endif
