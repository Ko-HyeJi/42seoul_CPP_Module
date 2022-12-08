/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 06:46:48 by hyko              #+#    #+#             */
/*   Updated: 2022/12/08 22:39:46 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N), _isSorted(false) {}

// Span::Span(const Span& obj)
// {
	
// }

Span::~Span(void) {}

// Span& Span::operator=(const Span& obj)
// {

// }

void    Span::addNumber(const int n)
{
    if (_vec.size() < _N) {
        _vec.push_back(n);
        _isSorted = false;
    }
    else
        throw (std::overflow_error("Vector Already Full"));
}

int     Span::shortestSpan()
{
    if (!_isSorted) {
        sort(_vec.begin(), _vec.end());
        _isSorted = true;
    }

    if (_vec.size() < 2)
        throw (std::logic_error("Too Few Elements"));
    int span = INT_MAX;
    for (std::size_t i = 0; i + 1< _vec.size(); i++) {
        if ((_vec[i + 1] - _vec[i]) < span) {
            span = _vec[i + 1] - _vec[i];
        }
    }
    return (span);
}

int     Span::longestSpan()
{
    if (!_isSorted) {
        sort(_vec.begin(), _vec.end());
        _isSorted = true;
    }

    if (_vec.size() < 2)
        throw (std::logic_error("Too Few Elements"));
    return (_vec.back() - _vec.front());
}

void    Span::printVector(void) const
{
    for (unsigned long i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << " ";
    std::cout << std::endl;
}
