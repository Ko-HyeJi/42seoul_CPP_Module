/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:54:05 by hyko              #+#    #+#             */
/*   Updated: 2022/11/21 17:15:56 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPRRAP_HPP
# define CLAPRRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string 	_Name;
	unsigned int	_HitPoints;
	unsigned int	_EnergyPoints;
	unsigned int	_AttackDamage;
	
public:
	/* constructors & destructors */
	ClapTrap(void);
	ClapTrap(std::string Name);
	ClapTrap(ClapTrap& obj);
	~ClapTrap(void);

	/* assignment operator */
	ClapTrap& operator=(ClapTrap& obj);

	/* getters & setters */
	std::string 	get_name(void);
	unsigned int	get_hit_points(void);
	unsigned int	get_energy_points(void);
	unsigned int	get_attack_damage(void);
	void			set_name(std::string Name);
	void			set_hit_points(unsigned int point);
	void			set_energy_points(unsigned int point);
	void			set_attack_damage(unsigned int damage);

	/* member functions */	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif