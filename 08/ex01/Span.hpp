/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 06:46:47 by hyko              #+#    #+#             */
/*   Updated: 2022/12/09 12:06:47 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <limits>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int			_N;
    std::vector<int>		_vec;
    bool					_isSorted;
    Span(void);

public:
    Span(const unsigned int N);
    Span(const Span& obj);
    ~Span(void);
    Span& operator=(const Span& obj);
    
    void    addNumber(const int n);
	template <typename Iter>
    void    addNumber(Iter begin, Iter end);
    
    int     shortestSpan();
    int     longestSpan();
	
	unsigned int		getSize() const;
	std::vector<int>	getVector() const;
	bool				getIsSorted() const;

    void    printVector(void) const;
};

template <typename Iter>
void    Span::addNumber(Iter begin, Iter end)
{
	while (begin != end) {
		if (_vec.size() < _N) {
			_vec.push_back(*(begin++));
			_isSorted = false;
		}
		else
			throw (std::overflow_error("Vector Already Full"));
	}
}

#endif
