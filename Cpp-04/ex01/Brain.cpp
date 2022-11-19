/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 13:04:32 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &source)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = source;
}

Brain &Brain::operator = (Brain const &other)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    for(int i = 0; i < 100; ++i)
        this->ideas[i] = other.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}