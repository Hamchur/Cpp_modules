/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:05:43 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;//should not create a leak
	delete i;
	
	std::cout << "============================" << std::endl;
	
	const int kolvo = 100;
	const Animal* animal[kolvo];

	for (int q = 0; q < kolvo; ++q)
	{
		if (q % 2 == 0)
			animal[q] = new Cat();
		else
			animal[q] = new Dog();
	}

	std::cout << "============================" << std::endl;

	for (int w = 0; w < kolvo; ++w)
	{
		if (w % 10 == 0 && w > 0)
			std::cout << std::endl;
		std::cout << "|" << animal[w]->getType() << "|";
	}
	std::cout << std::endl;

	std::cout << "============================" << std::endl;

	for(int e = 0; e < kolvo; ++e)
		delete animal[e];

	std::cout << "============================" << std::endl;

	Cat cat;
	Cat CatA(cat);
	Cat CatB = cat;

	std::cout << "cat: " << &cat.getBrain() << std::endl;
	std::cout << "CatA: " << &CatA.getBrain() << std::endl;
	std::cout << "CatB: " << &CatB.getBrain() << std::endl;

	std::cout << "============================" << std::endl;

	Dog dog;
	Dog DogA(dog);
	Dog DogB = dog;

	std::cout << "dog: " << &dog.getBrain() << std::endl;
	std::cout << "DogA: " << &DogA.getBrain() << std::endl;
	std::cout << "DogB: " << &DogB.getBrain() << std::endl;

	std::cout << "============================" << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << "Type of animal: " << wrongAnimal->getType() << " " << std::endl;
	std::cout << "Type of animal: " << wrongCat->getType() << " " << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;
	
	std::cout << "============================" << std::endl;

	return 0;
}