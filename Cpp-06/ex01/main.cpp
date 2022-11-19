/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:55:29 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/24 16:03:18 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct main
{
    int x;
    float y;
    std::string z;
} Data;

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}


Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data* a = new Data();
    Data* b;
    uintptr_t raw;

    a->x = 666;
    a->y = 777.77;
    a->z = "eight hundred eighty eight";
    raw = serialize(a);

    std::cout << "===================================================================" <<  std::endl;
    std::cout << "BEFORE SERIALIZE:" << std::endl;
    std::cout << "adress A: " << a << std::endl;
    std::cout << "A: x: " << a->x << "          y: " << a->y << "          z: " << a->z << std::endl;
    b = deserialize(raw);
    std::cout << "===================================================================" <<  std::endl;
    std::cout << "AFTER SERIALIZE:" << std::endl;
    std::cout << "adress serialize A: " << &raw << std::endl;
    std::cout << "adress deserialize raw: " << b << std::endl;
    std::cout << "B: x: " << b->x << "          y: " << b->y << "          z: " << b->z << std::endl;
    std::cout << "===================================================================" <<  std::endl;
    
    delete a;
}