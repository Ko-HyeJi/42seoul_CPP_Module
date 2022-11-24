/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 04:11:10 by hyko              #+#    #+#             */
/*   Updated: 2022/11/25 01:13:48 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{ 
	std::cout << "\n--------------------------------------------------\n" << std::endl;
	
	{
		/* subject */
		
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
		
	}
	
	std::cout << "\n--------------------------------------------------\n" << std::endl;
	
	{
		/* 비교 연산자 */
		Fixed a(42);
		Fixed b(42.42f);

		std::cout << (a > b) << std::endl; // F
		std::cout << (a < b) << std::endl; // T
		std::cout << (a >= b) << std::endl; // F
		std::cout << (a <= b) << std::endl; // T
		std::cout << (a == b) << std::endl; // F
		std::cout << (a != b) << std::endl; // T
		
	}
	
	std::cout << "\n--------------------------------------------------\n" << std::endl;
	
	{
		/* 산술 연산자 */
		Fixed a(42);
		Fixed b(42.42f);

		std::cout << (a + b) << std::endl;
		std::cout << (a - b) << std::endl;
		std::cout << (a * b) << std::endl;
		std::cout << (a / b) << std::endl;
	}
	
	std::cout << "\n--------------------------------------------------\n" << std::endl;
	
	{
		/* 증감 연산자 */
		
		Fixed a;
		std::cout << a.getRawBits() << std::endl;
		std::cout << (a++).getRawBits() << std::endl;
		std::cout << a.getRawBits() << std::endl;
		std::cout << (++a).getRawBits() << std::endl;
		std::cout << a.getRawBits() << std::endl;
	}

	std::cout << "\n--------------------------------------------------\n" << std::endl;

	{
		/* min, max */
		
		Fixed a(5);
		Fixed b(10);
		const Fixed aa(5);
		const Fixed bb(10);

		std::cout << Fixed::min(a, b) << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
		std::cout << Fixed::min(aa, bb) << std::endl;
		std::cout << Fixed::max(aa, bb) << std::endl;
	}
	
	std::cout << "\n--------------------------------------------------\n" << std::endl;
	return 0;
}
