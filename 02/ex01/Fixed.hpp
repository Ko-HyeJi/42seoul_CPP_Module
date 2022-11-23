/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 00:50:06 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 06:50:41 by hyko             ###   ########.fr       */
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
	Fixed(const Fixed& obj);
	Fixed(const int value); //int 생성자
	Fixed(const float value); //float 생성자
	~Fixed(void);

	Fixed& operator=(const Fixed& obj);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	//고정 소수점 값을 부동 소수점 값으로 변환
	float toFloat(void) const;
	//고정 소수점 값을 정수 값으로 변환
	int toInt(void) const;

};

//출력(<<)연산자 오버로딩
std::ostream& operator<<(std::ostream& out, const Fixed& fixed_nbr);

#endif
