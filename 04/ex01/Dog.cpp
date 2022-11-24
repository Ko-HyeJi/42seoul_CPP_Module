/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:07 by hyko              #+#    #+#             */
/*   Updated: 2022/11/25 00:21:49 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "[ " << this->type << " created ]" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Brain& b_obj)
{
	this->type = "Dog";
	std::cout << "[ " << this->type << " created with copied brain ]" << std::endl;
	this->brain = new Brain(b_obj);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "[ Dog destroyed ]" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->type << ": BowwowBowwowBowwowBowwow..." << std::endl;
}

Brain&	Dog::getBrain(void) const
{
	return (*this->brain);
}

void	Dog::setBrain(const Brain& brain)
{
	*this->brain = brain;
}