/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:54:40 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 04:15:46 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	/* constructors & destructors */
	ScavTrap(void);
	ScavTrap(std::string Name);
	ScavTrap(ScavTrap& obj);
	~ScavTrap(void);

	/* assignment operator */
	ScavTrap& operator=(ScavTrap& obj);

	/* member functions */	
	void attack(const std::string& target);
	void guardGate();
};

#endif