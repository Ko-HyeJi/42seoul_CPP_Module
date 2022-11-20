/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:26:38 by hyko              #+#    #+#             */
/*   Updated: 2022/11/20 04:32:37 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value): _value(value << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _value(roundf(value * (1 << _bits)))
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

float Fixed::toFloat(void) const
{
	return (float)_value / (1 << _bits);
}

float Fixed::toInt(void) const
{
	return(_value >> _bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed_nbr)
{
	return(out << fixed_nbr.toFloat());
}

//연산자 오버로딩
//비교 연산자
bool	Fixed::operator>(const Fixed &obj)
{
	return (this->toFloat() > obj.toFloat());
}

bool	Fixed::operator<(const Fixed &obj)
{
	return (this->toFloat() < obj.toFloat());
}

bool	Fixed::operator>=(const Fixed &obj)
{
	return (this->toFloat() >= obj.toFloat());	
}

bool	Fixed::operator<=(const Fixed &obj)
{
	return (this->toFloat() <= obj.toFloat());
}

bool	Fixed::operator==(const Fixed &obj)
{
	return (this->toFloat() == obj.toFloat());
}

bool	Fixed::operator!=(const Fixed &obj)
{
	return (this->toFloat() != obj.toFloat());
}

//산술 연산자
Fixed	Fixed::operator+(const Fixed &obj)
{
	Fixed	ret(this->toFloat() + obj.toFloat());
	return	(ret);
}

Fixed	Fixed::operator-(const Fixed &obj)
{
	Fixed	ret(this->toFloat() - obj.toFloat());
	return	(ret);
}

Fixed	Fixed::operator*(const Fixed &obj)
{
	Fixed	ret(this->toFloat() * obj.toFloat());
	return	(ret);	
}

Fixed	Fixed::operator/(const Fixed &obj)
{
	Fixed	ret(this->toFloat() / obj.toFloat());
	return	(ret);
}

//증감 연산자 -> 수정!!!
Fixed&	Fixed::operator++(void)
{
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed f;
	f = *this;
	return (f);	
}

Fixed	Fixed::operator--(int)
{
	Fixed f;
	f = *this;
	return (f);
}


//오버로딩 멤버 함수
Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return (obj1);
	return (obj2);
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	return (obj2);	
}
