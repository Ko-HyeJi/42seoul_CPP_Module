/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 04:33:59 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 23:11:22 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "[ " << this->type << " created ]" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string name) : type(name)
{
	std::cout << "[ " << this->type << " created ]" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	*this = obj;
	std::cout << "[ " << this->type << " copied ]" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[ WrongAnimal destroyed ]" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	this->type = obj.getType();
	std::cout << "[ Assignment operator called ]" << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->type << ": AnimalAnimalAnimalAnimal..." << std::endl;
}