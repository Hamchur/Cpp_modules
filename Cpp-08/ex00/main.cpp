/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:52:20 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/03 14:48:22 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <vector>
#include <list>

template <typename T>
void test(T &container, int n)
{
    if (easyfind(container, n))
        std::cout << "This " << n << " is in container" << std::endl;
    else
        std::cout << "This " << n << " isn't in container" << std::endl;
}

int main()
{
    std::cout << "=========================" << std::endl;
    
    std::vector<int> v;
    
    for (int i = 0; i < 100; i++)
        v.push_back(i);
    
    test(v, 55);
    test(v, 100);
    test(v, 66);
    test(v, -123);
    
    std::cout << "=========================" << std::endl;
    
    std::list<int> l;
    
    for (int i = -100; i < 0; i++)
        l.push_back(i);
        
    test(l, -11);
    test(l, 0);
    test(l, -94);
    test(l, 56758);

    std::cout << "=========================" << std::endl;
}