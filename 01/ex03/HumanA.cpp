/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:12:00 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 03:08:24 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
{
	// std::cout << "HumanA \"" << name << "\" created with \"" << weapon.getType() << "\"" << std::endl;
}

HumanA::~HumanA()
{
    // std::cout << "destroyed HumanA : \"" << _name << "\"" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
