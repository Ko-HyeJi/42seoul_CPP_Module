/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:43:46 by hyko              #+#    #+#             */
/*   Updated: 2022/11/19 00:41:05 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_value; //고정 소수점 값
	static const int _bits = 8;	//소수의 비트 수

public:
	//기본 생성자 -> 고정 소수점 값을 0으로 초기화
	Fixed(void);
	~Fixed(void);

	//복사 생성자
	Fixed(const Fixed& copy);
	//복사 대입 연산자 오버로딩
	Fixed& operator=(const Fixed& copy);

	//고정 소수점 값 원본을 반환
	int getRawBits(void) const;
	//고정 소수점 값 원본을 설정
	void setRawBits(int const raw);
};

#endif
