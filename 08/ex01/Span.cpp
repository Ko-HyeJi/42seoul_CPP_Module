/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 06:46:48 by hyko              #+#    #+#             */
/*   Updated: 2022/12/09 12:22:33 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0), _isSorted(false) {} 

Span::Span(const unsigned int N) : _N(N), _isSorted(false) {}

Span::Span(const Span& obj) : _N(obj.getSize()), _vec(obj.getVector()), _isSorted(obj.getIsSorted()) {}

Span::~Span(void) {}

Span& Span::operator=(const Span& obj)
{
	_N = obj.getSize();
	_vec = obj.getVector();
	_isSorted = obj.getIsSorted();
	return (*this);
}

void    Span::addNumber(const int n)
{
    if (_vec.size() < _N) {
        _vec.push_back(n);
        _isSorted = false;
    }
    else
        throw (std::overflow_error("Vector Already Full"));
}

// void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
// 	while (begin != end) {
// 		if (_vec.size() < _N) {
// 			_vec.push_back(*(begin++));
// 			_isSorted = false;
// 		}
// 		else
// 			throw (std::overflow_error("Vector Already Full"));
// 	}
// }

int     Span::shortestSpan()
{
    if (_vec.size() < 2)
        throw (std::runtime_error("Too Few Elements"));

    if (!_isSorted) {
        sort(_vec.begin(), _vec.end());
        _isSorted = true;
    }

    int span = std::numeric_limits<int>::max();
    // int span = INT_MAX;
    for (unsigned int i = 0; i < _vec.size() - 1; i++) {
        if ((_vec[i + 1] - _vec[i]) < span) {
            span = _vec[i + 1] - _vec[i];
        }
    }
    return (span);
}

int     Span::longestSpan()
{
    if (_vec.size() < 2)
        throw (std::runtime_error("Too Few Elements"));

    if (!_isSorted) {
        sort(_vec.begin(), _vec.end());
        _isSorted = true;
    }

    return (_vec.back() - _vec.front());
}

unsigned int		Span::getSize() const {
	return (_N);
}
std::vector<int>	Span::getVector() const {
	return (_vec);	
}
bool				Span::getIsSorted() const {
	return (_isSorted);
}

void    Span::printVector(void) const
{
    for (unsigned int i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << " ";
    std::cout << std::endl;
}
