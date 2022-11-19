/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:04:27 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string Type;
	
	public:
		Animal(void);
		Animal(std::string type);
		Animal (const Animal &source);
		Animal &operator = (Animal const &other);
		virtual ~Animal();

		void setType(std::string type);
		const std::string &getType(void) const;
		virtual void makeSound(void) const;

};

#endif
