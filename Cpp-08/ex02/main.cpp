/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:06:09 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/07 18:51:13 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);

    std::cout << "Top = " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "Size = " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    int i = 0;
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "Stack[" << i << "] = " << *it << std::endl;
        ++it;
        i++;
    }
    
    std::stack<int> s(mstack);
    return 0;
    
}