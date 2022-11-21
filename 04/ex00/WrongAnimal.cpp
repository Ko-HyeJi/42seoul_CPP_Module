/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 04:33:59 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 04:52:42 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Default")
{
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	*this = obj;
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	_type = obj.getType();
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::setType(std::string type)
{
	_type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << _type << ": WrongAnimalWrongAnimalWrongAnimalWrongAnimal..." << std::endl;
}