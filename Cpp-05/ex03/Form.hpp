/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:08:16 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:
		std::string Target;
	private:
		const std::string Name;
		bool IsSigned;
		const int GradeSigned;
		const int GradeExecuted;
	
	public:
		Form(void);
		Form(std::string name, int gradeSigned, int gradeExecuted);
		Form (const Form &source);
		Form &operator = (Form const &other);
		virtual ~Form();

		std::string getName(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;
		bool isSigned(void) const;

		void beSigned(const Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;

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
		class ExecuteException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Form& in);

#endif
