/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:28:02 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/29 16:20:03 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T const *arr, int len, void(*f)(const T&))
{
    for (int i = 0; i < len; i++)
        (*f)(arr[i]);
}

template <typename T>
void printValues(T const &value)
{
    std::cout << value << std::endl;
}

#endif