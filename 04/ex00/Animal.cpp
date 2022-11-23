/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:00 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 13:00:49 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Default")
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	*this = obj;
	std::cout << "Animal copied" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destroyed" << std::endl;
}

Animal&	Animal::operator=(const Animal& obj)
{
	this->type = obj.getType();
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << this->type << ": AnimalAnimalAnimalAnimal..." << std::endl;
}