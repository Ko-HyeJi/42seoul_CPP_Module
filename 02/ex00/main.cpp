/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:44:02 by hyko              #+#    #+#             */
/*   Updated: 2022/11/19 00:48:31 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a; //기본 생성자 사용
	Fixed b(a); //복사 생성자 사용
	// std::cout << "a : " << &a << std::endl << "b : " << &b << std::endl << std::endl;
	Fixed c; //기본 생성자 사용
	// std::cout << "b : " << &b << std::endl << "c : " << &c << std::endl << std::endl;
	// b.setRawBits(100); 

	c = b; //복사 대입 연산자 사용
	// std::cout << "b : " << &b << std::endl << "c : " << &c << std::endl << std::endl;
  
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	return 0;
}
