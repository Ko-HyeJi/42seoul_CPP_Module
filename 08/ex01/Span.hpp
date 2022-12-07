/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 06:46:47 by hyko              #+#    #+#             */
/*   Updated: 2022/12/07 14:51:00 by hyko             ###   ########.fr       */
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
    unsigned int        _N;
    std::vector<int>    _vec;
    
    Span(void);

public:
    Span(unsigned int N);
    Span(const Span& obj);
    ~Span(void);
    Span& operator=(const Span& obj);
    
    void    addNumber(const int n);
    int     shortestSpan();
    int     longestSpan();

	void    printVector(void) const;
};

#endif
