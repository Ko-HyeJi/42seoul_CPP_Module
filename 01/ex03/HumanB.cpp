/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:12:05 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 03:10:15 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB(std::string name)
// {
//        _name = name;
//        _weapon.setType("(null)");
//        std::cout << "created HumanB : \"" << _name << "\" with \"" << _weapon.getType() << "\"" << std::endl;
       
// }

HumanB::HumanB(std::string name): _weapon(NULL)
{
	this->_name = name;
	std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}


// HumanB::HumanB(std::string name, Weapon weapon)
// {
//     _name = name;
//     _weapon = weapon;
//     std::cout << "created HumanB : \"" << _name << "\" with \"" << _weapon.getType() << "\"" << std::endl;
// }

HumanB::~HumanB()
{
    std::cout << "destroyed HumanB : \"" << _name << "\"" << std::endl;
}

// void HumanB::attack(void)
// {
//     std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
// }

void HumanB::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

// void HumanB::setWeapon(Weapon weapon)
// {
//     _weapon = weapon;
// }

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
