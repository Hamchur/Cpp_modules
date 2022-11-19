/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:23:28 by hamchur           #+#    #+#             */
/*   Updated: 2022/05/27 15:23:30 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

#define ContactSize 9
#define Wide 10

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string	NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;

	public:
		void GetInfo(int index);
		void Add();
		std::string StrReduction(std::string str);
};
