/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:07:17 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/07 18:39:12 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <deque>
#include <list>
#include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack();
		MutantStack(MutantStack const &source);
		MutantStack &operator = (MutantStack const &other);
		~MutantStack();
		
		iterator begin() { return this->c.begin(); };
		iterator end() { return this->c.end(); };
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &source)
{
	*this = source;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator = (MutantStack const &other)
{
	this->c = other.c;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

#endif