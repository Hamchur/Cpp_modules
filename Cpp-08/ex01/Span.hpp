/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:44:54 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/07 18:31:51 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        std::vector<int> Vector;
        unsigned int N_Size;
    public:
        Span();
        Span(unsigned int N);
        Span(Span const &source);
        Span &operator = (Span const &other);
        ~Span();

        std::vector<int> getVector(void) const;
        unsigned int getSize() const;
        
        void addNumber(int N);
        
        int shortestSpan();
        int longestSpan();
        
        class SpanFull : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class NoSpan : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif