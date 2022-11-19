/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:13:00 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/24 17:13:07 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

class Base
{
    public:
        virtual ~Base(){};
};

class A: public Base
{  
};

class B: public Base
{  
};

class C: public Base
{  
};

Base* generate(void)
{
    std::srand(std::time(NULL));
    int random = std::rand();
    
    if (random % 3 == 2)
        return (new A);
    else if (random % 3 == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p)
{
    if (dynamic_cast<A*> (p))
        std::cout << "Pointer is class A" << std::endl;
    else if (dynamic_cast<B*> (p))
        std::cout << "Pointer is class B" << std::endl;
    else if (dynamic_cast<C*> (p))
        std::cout << "Pointer is class C" << std::endl;
    else
        std::cout << "Error" << std::endl;
}

void identify(Base& p)
{
    try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Reference is A class" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}

	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Reference is B class" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}

	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Reference is C class" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
}

int main()
{
    Base *a;

    std::cout << "ptr *p" << std::endl;
    a = generate();
    identify(a);
    delete(a);

    std::cout << "ref &p" << std::endl;
    
    Base &b = *(generate());
    identify(b);
    delete &b;
}