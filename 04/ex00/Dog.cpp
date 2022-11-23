/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:07 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 11:40:02 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->type << ": BowwowBowwowBowwowBowwow..." << std::endl;
}