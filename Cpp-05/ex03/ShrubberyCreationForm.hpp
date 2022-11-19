/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:08:51 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		std::string Target;
		ShrubberyCreationForm(void);

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &toCopy);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator = (ShrubberyCreationForm const &toCopy);

		const std::string &getTarget() const;
		virtual void execute(Bureaucrat const &executor) const;
};

# define ASCII_TREE \
"                                                          ." << std::endl << \
"                                              .         ;" << std::endl << \
"                .              .              ;%     ;;" << std::endl << \
"                  ,           ,                :;%  %; " << std::endl << \
"                   :         ;                   :;%;'     .," << std::endl << \
"          ,.        %;     %;            ;        %;'    ,;" << std::endl << \
"            ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl << \
"             %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl << \
"              ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl << \
"               `%;.     ;%;     %;'         `;%%;.%;'" << std::endl << \
"                `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl << \
"                   `:%;.  :;bd%;          %;@%;'" << std::endl << \
"                     `@%:.  :;%.         ;@@%;'   " << std::endl << \
"                       `@%.  `;@%.      ;@@%;     " << std::endl << \
"                         `@%%. `@%%    ;@@%;    " << std::endl << \
"                           ;@%. :@%%  %@@%;    " << std::endl << \
"                            %@bd%%%bd%%:;     " << std::endl << \
"                               #@%%%%%:;;"  << std::endl << \
"                               %@@%%%::;" << std::endl << \
"                               %@@@%(o);  . '  " << std::endl << \
"                               %@@@o%;:(.,'         " << std::endl << \
"                           `.. %@@@o%::;    " << std::endl << \
"                              `)@@@o%::;      " << std::endl << \
"                               %@@(o)::;        " << std::endl << \
"                               .%@@@@%::;         " << std::endl << \
"                               ;%@@@@%::;.      " << std::endl << \
"                              ;%@@@@%%:;;;. " << std::endl << \
"                          ...;%@@@@@%%:;;;;,.. " << std::endl

#endif
