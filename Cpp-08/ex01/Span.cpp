/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:44:39 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/07 17:53:43 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N) : N_Size(N)
{
}

Span::Span(Span const &source)
{
    *this = source;
}

Span &Span::operator = (Span const &other)
{
    this->N_Size = other.N_Size;
    this->Vector = other.Vector;
    return *this;
}

Span::~Span()
{
}

std::vector<int> Span::getVector(void) const
{
    return (this->Vector);
}

unsigned int Span::getSize(void) const
{
    return (this->N_Size);
}

void Span::addNumber(int N)
{
    if (Vector.size() >= N_Size)
        throw SpanFull();
    Vector.push_back(N);
}

int Span::shortestSpan()
{
    std::vector<int> copy = Vector;
    int min = std::numeric_limits<int>::max();
    
    if (N_Size <= 1 || Vector.size() <= 1)
		throw NoSpan();
	sort(copy.begin(), copy.end());
	for (size_t i = 0; i + 1 < Vector.size(); i++)
		min = std::min(min, static_cast<int>(copy[i + 1] - copy[i]));
	return (min);
}

int Span::longestSpan()
{
    int min;
    int max;

    if (N_Size <= 1 || Vector.size() <= 1)
        throw NoSpan();
    min = *std::min_element(Vector.begin(), Vector.end());
    max = *std::max_element(Vector.begin(), Vector.end());
    return (max - min);
}

const char *Span::SpanFull::what() const throw()
{
    return ("\x1b[31mError: can't add more numbers\x1b[0m");
}

const char *Span::NoSpan::what() const throw()
{
    return ("\x1b[31mError: haven't enough numbers for range\x1b[0m");
}