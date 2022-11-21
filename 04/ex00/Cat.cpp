/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:04 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 04:10:42 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << _type << ": ..." << std::endl;
}