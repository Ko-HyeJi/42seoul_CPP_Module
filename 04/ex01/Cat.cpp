/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:04 by hyko              #+#    #+#             */
/*   Updated: 2022/11/25 00:07:01 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "[ " << this->type << " created ]" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Brain& b_obj)
{
	this->type = "Cat";
	std::cout << "[ " << this->type << " created with copied brain ]" << std::endl;
	this->brain = new Brain(b_obj);
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "[ Cat destroyed ]" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->type << ": MeowMeowMeowMeowMeow..." << std::endl;
}

Brain&	Cat::getBrain(void) const
{
	return (*this->brain);
}

void	Cat::setBrain(const Brain& brain)
{
	*this->brain = brain;
}