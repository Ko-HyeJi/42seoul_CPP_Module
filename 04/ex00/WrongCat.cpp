/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 04:36:28 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 04:36:39 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	_type = "WrongCat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroyed" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << _type << ": ..." << std::endl;
}