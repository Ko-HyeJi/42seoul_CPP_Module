/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 00:50:13 by hyko              #+#    #+#             */
/*   Updated: 2022/11/19 01:32:31 by hyko             ###   ########.fr       */
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

Fixed::Fixed(const float value): _value(roundf(value * (1 << _bits))) //실수 -> 고정소수점
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = copy.getRawBits();
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

//고정 소수점 값을 부동 소수점 값으로 변환
float Fixed::toFloat(void) const
{
	return (float)_value / (1 << _bits);
}

//고정 소수점 값을 정수 값으로 변환
float Fixed::toInt(void) const
{
	return(_value >> _bits);
}

//삽입(<<)연산자 오버로딩
std::ostream& operator<<(std::ostream& out, const Fixed& fixed_nbr)
{
	return(out << fixed_nbr.toFloat());
}
