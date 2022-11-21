/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:00 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 04:52:14 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default")
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	*this = obj;
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destroyed" << std::endl;
}

Animal&	Animal::operator=(const Animal& obj)
{
	_type = obj.getType();
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::setType(std::string type)
{
	_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << _type << ": AnimalAnimalAnimalAnimal..." << std::endl;
}