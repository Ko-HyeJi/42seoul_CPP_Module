/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:02 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 11:40:13 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "iostream"

class Animal
{
protected:
	std::string type;
public:
	Animal(void);
	Animal(const Animal& obj);
	virtual ~Animal(void); // 가상 소멸자

	Animal&	operator=(const Animal& obj);

	std::string	getType(void) const;
	void		setType(std::string type);

	virtual void	makeSound(void) const; // 가상 함수
};

#endif