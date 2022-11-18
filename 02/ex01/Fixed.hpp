/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 00:50:06 by hyko              #+#    #+#             */
/*   Updated: 2022/11/19 01:22:10 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_value; //고정 소수점 값
	static const int _bits = 8;	//소수의 비트 수

public:
	//기본 생성자 -> 고정 소수점 값을 0으로 초기화
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);

	//복사 생성자
	Fixed(const Fixed& copy);
	//복사 대입 연산자 오버로딩
	Fixed& operator=(const Fixed& copy);

	//고정 소수점 값 원본을 반환
	int getRawBits(void) const;
	//고정 소수점 값 원본을 설정
	void setRawBits(int const raw);

	//고정 소수점 값을 부동 소수점 값으로 변환
	float toFloat(void) const;
	//고정 소수점 값을 정수 값으로 변환
	float toInt(void) const;

};

//삽입(<<)연산자 오버로딩
std::ostream& operator<<(std::ostream& out, const Fixed& fixed_nbr);

#endif
