/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 04:36:28 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 23:11:37 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "[ " << this->type << " created ]" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "[ WrongCat destroyed ]" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->type << ": MeowMeowMeowMeowMeow..." << std::endl;
}