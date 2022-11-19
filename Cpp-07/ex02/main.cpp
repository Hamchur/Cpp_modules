/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:15:47 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/31 15:45:13 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class TestClass 
{
	private:
		int m_number;
	public:
		TestClass(void) : m_number(42) {}
		int getNumber(void) const 
		{ 
			return this->m_number; 
		}
};


int main(void) 
{
	Array<TestClass>	arrayClass(5);
	Array<int>			arrayInt(3);
	Array<std::string>	arrayString(10);
	Array<int>			empty;

	Array<int> tmp = arrayInt;
	std::cout << " -- Testing simple arrays --" << std::endl;
	arrayInt[2] = 2022;
 	arrayString[9] = "Testing some string";
	std::cout << arrayInt[2] << std::endl << arrayString[9] << std::endl << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << " -- Testing arrayClass array --" << std::endl;
	std::cout << arrayClass[4].getNumber() << std::endl << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << " -- Testing array size --" << std::endl;
	std::cout << empty.size() << std::endl;
	std::cout << arrayInt.size() << std::endl;
	std::cout << arrayString.size() << std::endl;
	std::cout << arrayClass.size() << std::endl << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << " -- Testing operator = --" << std::endl;
	std::cout << "Empty size before:" << std::endl;
	std::cout << empty.size() << std::endl;
	std::cout << "assigning arrayInt to empty" << std::endl;
	empty = arrayInt;
	std::cout << "Empty size after:" << std::endl;
	std::cout << empty.size() << std::endl;
	std::cout << "Values of empty[2] and arrayInt[2]:" << std::endl;
	std::cout << empty[2] << " and " << arrayInt[2] << std::endl;
	std::cout << "changing value of empty[2]" << std::endl;
	empty[2] = 999;
	std::cout << "Values of empty[2] and arrayInt[2]:" << std::endl;
	std::cout << empty[2] << " and " << arrayInt[2] << std::endl << std::endl;;
	std::cout << "-------------------" << std::endl;

	std::cout << " -- Testing exceptions --" << std::endl;
	try 
	{
		std::cout << arrayInt[10] << "This should not be printed" << std::endl;
	}
	catch(std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	try {
		std::cout << arrayClass[-1].getNumber() << "This should not be printed" << std::endl;
	}
	catch(std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp;
// 		tmp = numbers; 
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }