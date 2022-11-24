/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:54:38 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 22:34:44 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "[ ScavTrap " << _Name << " created ]" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
	_Name = Name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "[ ScavTrap " << _Name << " created ]" << std::endl;	
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[ ScavTrap " << _Name << " destroyed ]" << std::endl;	
}

ScavTrap::ScavTrap(ScavTrap& obj)
{
	*this = obj;
	std::cout << "[ ScavTrap " << _Name << " copied ]" << std::endl;	
}

ScavTrap& ScavTrap::operator=(ScavTrap& obj)
{
	std::cout << "[ Assignment operator called ]" << std::endl;
	_Name = obj.get_name();
	_HitPoints = obj.get_hit_points();
	_EnergyPoints = obj.get_energy_points();
	_AttackDamage = obj.get_attack_damage();
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (_HitPoints <= 0) {
		std::cout << ">> ScavTrap " << _Name << " already dead" << std::endl;
	}
	else if (_EnergyPoints <= 0) {
		std::cout << ">> ScavTrap " << _Name << " attack failed: out of energy points" << std::endl;
	}
	else {
		_EnergyPoints--;	
		std::cout << ">> ScavTrap " << _Name << " attacks " << target << \
		", causing " << _AttackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (_HitPoints <= 0) {
		std::cout << ">> ScavTrap " << _Name << " already dead" << std::endl;
	}
	else if (_EnergyPoints <= 0) {
		std::cout << ">> ScavTrap " << _Name << " switch mode failed: out of energy points" << std::endl;
	}
	else {
		std::cout << ">> ScavTrap " << _Name << " now in Gate keeper mode!" << std::endl;
	}
}