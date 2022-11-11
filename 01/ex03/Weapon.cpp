/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:10:43 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 03:06:40 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Weapon::Weapon(std::string type)
// {
//     _type = type;
// }

Weapon::Weapon(std::string type): _type(type)
{
}


Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void)
{
    return (_type); // 참조자 반환 형식?
}

void Weapon::setType(std::string type)
{
    _type = type;
}
