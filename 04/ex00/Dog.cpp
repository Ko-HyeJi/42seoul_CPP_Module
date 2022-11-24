/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:07 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 23:11:09 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "[ " << this->type << " created ]" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "[ Dog destroyed ]" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->type << ": BowwowBowwowBowwowBowwow..." << std::endl;
}