/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:48:52 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 22:09:33 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "[ FragTrap " << _Name << " created ]" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
	_Name = Name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "[ FragTrap " << _Name << " created ]" << std::endl;	
}

FragTrap::~FragTrap(void)
{
	std::cout << "[ FragTrap " << _Name << " destroyed ]" << std::endl;	
}

FragTrap::FragTrap(FragTrap& obj)
{
	*this = obj;
	std::cout << "[ FragTrap " << _Name << " copied ]" << std::endl;	
}

FragTrap& FragTrap::operator=(FragTrap& obj)
{
	std::cout << "[ Assignment operator called ]" << std::endl;
	_Name = obj.get_name();
	_HitPoints = obj.get_hit_points();
	_EnergyPoints = obj.get_energy_points();
	_AttackDamage = obj.get_attack_damage();
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (_HitPoints <= 0) {
		std::cout << ">> FragTrap " << _Name << " already dead" << std::endl;
	}
	else if (_EnergyPoints <= 0) {
		std::cout << ">> FragTrap " << _Name << " speak failed: out of energy points" << std::endl;
	}
	else {
		std::cout << ">> FragTrap" << _Name << " said high five guys!" << std::endl;
	}
}