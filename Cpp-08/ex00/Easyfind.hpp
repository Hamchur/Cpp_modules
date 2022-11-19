/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:52:17 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/03 13:52:06 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
bool easyfind(T &container, const int value)
{
    typename T::iterator iter;
    
    iter = std::find(container.begin(), container.end(), value);
    if (iter == container.end())
        return (false);
    return (true);
}

#endif