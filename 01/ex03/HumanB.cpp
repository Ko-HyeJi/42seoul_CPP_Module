/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:12:05 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 02:23:10 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
    std::cout << _name << "attacks with their " << _weapon.getType() << std::endl;
}
