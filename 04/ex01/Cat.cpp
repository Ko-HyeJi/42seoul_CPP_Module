/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:04 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 12:55:21 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat created" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Brain& b_obj)
{
	std::cout << "Cat created with copied brain" << std::endl;
	this->type = "Cat";
	this->brain = new Brain(b_obj);
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat destroyed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->type << ": ..." << std::endl;
}
