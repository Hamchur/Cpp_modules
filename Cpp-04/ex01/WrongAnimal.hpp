/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:05:10 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string Type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal (const WrongAnimal &source);
		WrongAnimal &operator = (WrongAnimal const &other);
		virtual ~WrongAnimal();

		const std::string &getType(void) const;
		void makeSound(void) const;

};


#endif
