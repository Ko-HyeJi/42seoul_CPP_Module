/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 06:46:27 by hyko              #+#    #+#             */
/*   Updated: 2022/12/09 12:09:01 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <list>
#include <string>
#include <sstream>
#include <iterator>

#include "Span.hpp"

int main() 
{
    try
    {
		std::cout << "<test1 : subject>\n" << std::endl;
        Span sp(5);
        
        sp.addNumber(6); 
        sp.addNumber(3); 
        sp.addNumber(17); 
        sp.addNumber(9); 
        sp.addNumber(11);
		
		sp.printVector();
        
        std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
        std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "--------------------------------------------------\n" << std::endl;
    
	try
    {
		std::cout << "<test2 : using iterator>\n" << std::endl;
        std::vector<int> vec;
		unsigned int size = 1000;
        for (unsigned int i = 0; i < 100; i++) {
            vec.push_back(i);
        }

        Span sp(size);
        sp.addNumber(vec.begin(), vec.end());

		sp.printVector();

		std::list<int> lst;
		for (int i = 0; i < 42; i++) {
			lst.push_back(i);
		}
		sp.addNumber(lst.begin(), lst.end());

		sp.printVector();

		std::stringstream ss("0 1 2 3 42");
		std::istream_iterator<int> begin(ss), end;
		sp.addNumber(begin, end);

		sp.printVector();

        std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
        std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "--------------------------------------------------\n" << std::endl;
    
    try
    {
		std::cout << "<test3 : random value>\n" << std::endl;
        std::srand(time(NULL));
        std::vector<int> vec;
		unsigned int size = 10000;
        for (unsigned int i = 0; i < size; i++) {
            vec.push_back(rand());
        }

        Span sp(size);
        sp.addNumber(vec.begin(), vec.end());

		// sp.printVector();

        std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
        std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "--------------------------------------------------\n" << std::endl;

    try
    {
		std::cout << "<test4 : class copy>\n" << std::endl;
        Span sp(10);
        sp.addNumber(10);
        sp.addNumber(123);
        sp.addNumber(199);
        sp.addNumber(299);
        sp.addNumber(500);
		sp.printVector();

		Span sp2(sp);
		sp2.addNumber(0);
		sp2.printVector();
		Span sp3(100);
		sp3 = sp;
		sp3.addNumber(1000);
		sp3.printVector();
		sp.printVector();

        std::cout << "sp longestSpan: " << sp.longestSpan() << std::endl;
        std::cout << "sp shortestSpan: " << sp.shortestSpan() << std::endl;
        std::cout << "sp2 shortestSpan: " << sp2.shortestSpan() << std::endl;
        std::cout << "sp2 longestSpan: " << sp2.longestSpan() << std::endl;
        std::cout << "sp3 shortestSpan: " << sp3.shortestSpan() << std::endl;
        std::cout << "sp3 longestSpan: " << sp3.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "--------------------------------------------------\n" << std::endl;
    
    return 0; 
}
