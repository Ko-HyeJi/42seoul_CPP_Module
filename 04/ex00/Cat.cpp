/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:04 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 23:10:57 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "[ " << this->type << " created ]" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "[ Cat destroyed ]" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->type << ": MeowMeowMeowMeowMeow..." << std::endl;
}