/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 06:46:27 by hyko              #+#    #+#             */
/*   Updated: 2022/12/07 06:54:17 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() 
{
    Span sp = Span(5);
    
    sp.addNumber(6); 
    sp.addNumber(3); 
    sp.addNumber(17); 
    sp.addNumber(9); 
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl; 
    std::cout << sp.longestSpan() << std::endl;

    return 0; 
}
