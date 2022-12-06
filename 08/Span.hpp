/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 06:46:47 by hyko              #+#    #+#             */
/*   Updated: 2022/12/07 06:53:48 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
private:
    unsigned int    _N;
    
    Span(void);

public:
    Span(int N);
    Span(Span& obj);
    ~Span(void);
    Span& operator=(Span& obj);
    
    void    addNumber(int n);
    int shortestSpan()
    int longestSpan()
};

Span::Span(/* args */)
{
}

Span::~Span()
{
}


#endif
