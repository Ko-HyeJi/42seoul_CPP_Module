/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:26:52 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 06:52:45 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_value;
	static const int _bits = 8;

public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& obj);
	~Fixed(void);

	Fixed& operator=(const Fixed& obj);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;


	/* 연산자 오버로딩 */
	//비교 연산자
	bool	operator>(const Fixed &obj);
	bool	operator<(const Fixed &obj);
	bool	operator>=(const Fixed &obj);
	bool	operator<=(const Fixed &obj);
	bool	operator==(const Fixed &obj);
	bool	operator!=(const Fixed &obj);
	//산술 연산자
	Fixed	operator+(const Fixed &obj);
	Fixed	operator-(const Fixed &obj);
	Fixed	operator*(const Fixed &obj);
	Fixed	operator/(const Fixed &obj);
	//증감 연산자
	Fixed&	operator++(void);
	Fixed&	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	//min, max
	static Fixed& min(Fixed& obj1, Fixed& obj2);
	static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
	static Fixed& max(Fixed& obj1, Fixed& obj2);
	static const Fixed& max(const Fixed& obj1, const Fixed& obj2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed_nbr);

#endif
