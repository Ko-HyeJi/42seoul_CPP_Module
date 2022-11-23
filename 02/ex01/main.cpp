/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 00:49:48 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 06:48:43 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	std::cout << "--------------------------------------------------\n" << std::endl;
	
	{
		/* subject */
		
		Fixed a;
		Fixed const b( 10 ); 
		Fixed const c( 42.42f ); 
		Fixed const d( b );
		
		a = Fixed( 1234.4321f );

		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}

	std::cout << "\n--------------------------------------------------\n" << std::endl;
	
	{
		/* 출력 연산자 오버로딩 */
		Fixed a(100);
		std::cout << a.toFloat() << std::endl;
		std::cout << a << std::endl;
		
	}

	std::cout << "\n--------------------------------------------------" << std::endl;
	return 0; 
}