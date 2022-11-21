/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:54:12 by hyko              #+#    #+#             */
/*   Updated: 2022/11/21 17:45:41 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{	
	std::cout << "==================================================\n" << std::endl;	
	
	{
		ScavTrap	a("Alpha");
		std::cout << std::endl;
		
		std::cout << "before attack EP: " << a.get_energy_points() << std::endl;
		a.attack("target");
		std::cout << "after attack EP: " << a.get_energy_points() << std::endl;
		std::cout << std::endl;

		while (a.get_energy_points()) {
			a.attack("target");
		}
		a.attack("target");
		std::cout << std::endl;

		a.set_hit_points(0);
		a.attack("target");
		std::cout << std::endl;
	}
	
	std::cout << "\n--------------------------------------------------\n" << std::endl;

	{
		ScavTrap	b("Bravo");
		std::cout << std::endl;
		
		std::cout << "before damage HP: " << b.get_hit_points() << std::endl;
		b.takeDamage(15);
		std::cout << "after damage HP: " << b.get_hit_points() << std::endl;
		std::cout << std::endl;
		
		while (b.get_hit_points()) {
			b.takeDamage(15);
		}
		b.takeDamage(15);
		std::cout << std::endl;
	}

	std::cout << "\n--------------------------------------------------\n" << std::endl;

	{
		ScavTrap	c("Charlie");
		std::cout << std::endl;
		
		std::cout << "before repair EP: " << c.get_energy_points() << "  HP: " << c.get_hit_points() << std::endl;
		c.beRepaired(15);
		std::cout << "after repair EP: " << c.get_energy_points() << "  HP: " << c.get_hit_points() << std::endl;
		std::cout << std::endl;
		
		while (c.get_energy_points()) {
			c.beRepaired(15);
		}
		c.beRepaired(15);
		std::cout << std::endl;

		c.set_hit_points(0);
		c.beRepaired(15);
		std::cout << std::endl;
	}
	
	std::cout << "\n--------------------------------------------------\n" << std::endl;

	{
		ScavTrap	d("Delta");
		std::cout << std::endl;

		d.guardGate();
		std::cout << std::endl;
		
		d.set_energy_points(0);
		d.guardGate();
		std::cout << std::endl;
		
		d.set_hit_points(0);
		d.guardGate();
		std::cout << std::endl;
	}

	std::cout << "\n==================================================" << std::endl;

	return (0);
}
