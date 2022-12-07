/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 06:46:27 by hyko              #+#    #+#             */
/*   Updated: 2022/12/07 18:09:44 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>

#include "Span.hpp"

int main() 
{
    try
    {
        Span sp = Span(5);
        
        sp.addNumber(6); 
        sp.addNumber(3); 
        sp.addNumber(17); 
        sp.addNumber(9); 
        sp.addNumber(11);
        
        std::cout << sp.shortestSpan() << std::endl; 
        std::cout << sp.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::srand(time(NULL));
        std::vector<int> vec;
        for (std::size_t i = 0; i < 10; i++) {
            vec.push_back(rand());
        }
        sort(vec.begin(), vec.end());

        Span sp = Span(100000);
        
        sp.addNumber(6); 
        sp.addNumber(0);
        sp.addNumber(17); 
        sp.addNumber(9); 
        sp.addNumber(11);
        
        std::cout << sp.shortestSpan() << std::endl; 
        std::cout << sp.longestSpan() << std::endl;
        sp.addNumber(13);
        std::cout << sp.shortestSpan() << std::endl; 
        sp.addNumber(15);
        std::cout << sp.longestSpan() << std::endl;

        std::cout << "vector min: " << vec[0] << "\nvector max: " << vec.back() << std::endl;

        sp.addNumber(vec.begin(), vec.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0; 
}
