/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:16:27 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/29 13:55:58 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;   
}

template <typename T>
T const &min(T const &a, T const &b)
{
    if (a < b)
        return a;
    return b;   
}

template <typename T>
T const &max(T const &a, T const &b)
{
    if (a < b)
        return b;
    return a;
}

#endif