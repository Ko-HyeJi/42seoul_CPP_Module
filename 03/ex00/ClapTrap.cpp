/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:15:19 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 21:37:03 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "[ ClapTrap " << _Name << " created ]" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "[ ClapTrap " << _Name << " created ]" << std::endl;	
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[ ClapTrap " << _Name << " destroyed ]" << std::endl;	
}

ClapTrap::ClapTrap(ClapTrap& obj)
{
	*this = obj;
	std::cout << "[ ClapTrap " << _Name << " copied ]" << std::endl;	
}

ClapTrap& ClapTrap::operator=(ClapTrap& obj)
{
	std::cout << "[ Assignment operator called ]" << std::endl;
	_Name = obj.get_name();
	_HitPoints = obj.get_hit_points();
	_EnergyPoints = obj.get_energy_points();
	_AttackDamage = obj.get_attack_damage();
	return (*this);
}

std::string	ClapTrap::get_name(void)
{
	return (_Name);
}

unsigned int	ClapTrap::get_hit_points(void)
{
	return (_HitPoints);
}

unsigned int	ClapTrap::get_energy_points(void)
{
	return (_EnergyPoints);	
}

unsigned int	ClapTrap::get_attack_damage(void)
{
	return (_AttackDamage);	
}

void	ClapTrap::set_name(std::string Name)
{
	_Name = Name;	
}

void	ClapTrap::set_hit_points(unsigned int point)
{
	_HitPoints = point;	
}

void	ClapTrap::set_energy_points(unsigned int point)
{
	_EnergyPoints = point;
}

void	ClapTrap::set_attack_damage(unsigned int damage)
{
	_AttackDamage = damage;
}

void ClapTrap::attack(const std::string& target)
{
	if (_HitPoints <= 0) {
		std::cout << ">> CalpTrap " << _Name << " already dead" << std::endl;
	}
	else if (_EnergyPoints <= 0) {
		std::cout << ">> ClapTrap " << _Name << " attack failed: out of energy points" << std::endl;
	}
	else {
		_EnergyPoints--;	
		std::cout << ">> CalpTrap " << _Name << " attacks " << target << \
		", causing " << _AttackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints <= 0) {
		std::cout << ">> CalpTrap " << _Name << " already dead" << std::endl;
	}	
	else if (_HitPoints >= amount) {
		std::cout << ">> CalpTrap " << _Name << " took " \
		<< amount << " points of damage!" << std::endl;
		_HitPoints -= amount;
	}
	else {
		std::cout << ">> CalpTrap " << _Name << " took " \
		<< _HitPoints << " points of damage!" << std::endl;
		_HitPoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints <= 0) {
		std::cout << ">> CalpTrap " << _Name << " already dead" << std::endl;
	}
	else if (_EnergyPoints <= 0) {
		std::cout << ">> ClapTrap " << _Name << " repair failed: out of energy points" << std::endl;
	}
	else {
		std::cout << ">> ClapTrap " << _Name << " increased " \
		<< amount << " point of hit points!" << std::endl;
		_HitPoints += amount; 
		_EnergyPoints--;
	}
}

void ClapTrap::printStatus(void)
{
	std::cout << "\n***** status *******" << std::endl;
	std::cout << "name: " << this->get_name() << std::endl;
	std::cout << "HP: "<< this->get_hit_points() << std::endl;
	std::cout << "EP: " <<this->get_energy_points() << std::endl;
	std::cout << "********************\n" << std::endl;
}