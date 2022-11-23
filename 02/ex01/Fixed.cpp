/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 00:50:13 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 06:53:48 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value): _value(value << _bits) //정수 -> 고정소수점
{	
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _value(roundf(value * (1 << _bits))) //실수(부동소수점) -> 고정소수점
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = obj.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

/* 고정소수점 값을 부동소수점 값으로 변환 */
float Fixed::toFloat(void) const
{
	return (float)_value / (1 << _bits);
}

/* 고정소수점 값을 정수 값으로 변환 */
int Fixed::toInt(void) const
{
	return(_value >> _bits);
}

/* 출력(<<)연산자 오버로딩 -> 전역 함수로만 구현 가능 */
std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	return(out << obj.toFloat());
}
