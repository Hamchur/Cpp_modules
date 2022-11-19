/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:27:55 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/30 11:57:42 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

class Awesome
{
    private:
        int N;
    public:
      Awesome( void ) : N(42) { return; }
      int get( void ) const { return this->N; }  
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main()
{
    int arrInt[5] = {1, 22, 333, 4444, 55555};
	char arrChar[5] = {'G', 'E', 'N', 'O', 'M'};

	std::string arrStr[3];
	arrStr[0] = "Hello";
	arrStr[1] = "My";
	arrStr[2] = "Friends";

	iter(arrInt, 5, printValues);
	iter(arrChar, 5, printValues);
	iter(arrStr, 3, printValues);

	Awesome tab[5];
	iter(tab, 5, printValues);

	return (0);
}