/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:07:48 by hamchur           #+#    #+#             */
/*   Updated: 2022/05/31 17:07:50 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact ContactList[ContactSize];
	
	public:
		void AddContact(int ContactIndex);
		void SearchContact();
};
