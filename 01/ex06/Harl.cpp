/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:56:24 by hyko              #+#    #+#             */
/*   Updated: 2022/11/14 00:57:02 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n" \
	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\n" \
	"I really do!\n" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\n" \
	"I cannot believe adding extra bacon costs more money.\n" \
	"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n" \
	"I think I deserve to have some extra bacon for free.\n" \
	"I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\n" \
	"This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}