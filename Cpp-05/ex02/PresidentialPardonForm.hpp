/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:07:53 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form 
{
public:
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( const PresidentialPardonForm& other );
	PresidentialPardonForm& operator=( const PresidentialPardonForm& other );
	~PresidentialPardonForm();

	virtual void execute(const Bureaucrat &executor) const;
};

#endif
