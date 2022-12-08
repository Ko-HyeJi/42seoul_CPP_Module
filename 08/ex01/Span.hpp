/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 06:46:47 by hyko              #+#    #+#             */
/*   Updated: 2022/12/09 03:04:49 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int			_N;
    std::vector<int>		_vec;
    bool					_isSorted;

public:
    Span(void);
    Span(const unsigned int N);
    Span(const Span& obj);
    ~Span(void);
    Span& operator=(const Span& obj);
    
    void    addNumber(const int n);
    void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int     shortestSpan();
    int     longestSpan();
	
	unsigned int		getSize() const;
	std::vector<int>	getVector() const;
	bool				getIsSorted() const;

    void    printVector(void) const;
};

#endif
