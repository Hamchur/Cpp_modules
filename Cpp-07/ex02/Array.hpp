/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:15:44 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/30 15:48:58 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T   *arr;
        int Size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &source);
        Array &operator = (Array const &other);
        ~Array();
        
        T &operator [] (const int &i) const;
        
        int size() const;

        class OutOfBounds : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

template <typename T>
Array<T>::Array() : arr(new T[NULL]), Size(0) 
{
}

template <typename T>
Array<T>::Array(unsigned int n) : Size(n)
{
    if (this->Size < 0)
        throw OutOfBounds();
    this->arr = new T[Size];
}

template <typename T>
Array<T>::Array(Array const &source)
{
    *this = source;
}

template <typename T>
Array<T> &Array<T>::operator = (Array const &other)
{
    if (this->arr != NULL)
        delete [] this->arr;
    if (other.size() != 0)
    {
        this->Size = other.size();
        this->arr = new T[this->Size];
        for (int i  = 0; i < this->Size; i++)
            this->arr[i] =  other[i];
    } 
    return *this;
}

template <typename T>
T &Array<T>::operator [] (const int & i) const
{
    if (i < 0 || i >= this->Size)
        throw OutOfBounds();
    return (this->arr[i]);
}

template <typename T>
int Array<T>::size() const
{
    return (this->Size);
}

template <typename T>
const char *Array<T>::OutOfBounds::what() const throw()
{
    return ("Out of bounds");
}

template <typename T>
Array<T>::~Array()
{
    if (this->arr != NULL)
        delete [] this->arr;
}

#endif