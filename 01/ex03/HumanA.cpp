/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:12:00 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 02:26:28 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string weapon, std::string name)
{
    _weapon.setType(weapon);
    _name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    std::cout << _name << "attacks with their " << _weapon.getType() << std::endl;
}
