/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:52:45 by hyko              #+#    #+#             */
/*   Updated: 2022/11/21 16:44:36 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	
	std::cout << "==================================================\n" << std::endl;
	
	{
		ClapTrap	a("Alpha");
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
		ClapTrap	b("Bravo");
		std::cout << std::endl;
		
		std::cout << "before repair EP: " << b.get_energy_points() << "  HP: " << b.get_hit_points() << std::endl;
		b.beRepaired(3);
		std::cout << "after repair EP: " << b.get_energy_points() << "  HP: " << b.get_hit_points() << std::endl;
		std::cout << std::endl;
		
		while (b.get_energy_points()) {
			b.beRepaired(3);
		}
		b.beRepaired(3);
		std::cout << std::endl;

		b.set_hit_points(0);
		b.beRepaired(3);
		std::cout << std::endl;
	}

	std::cout << "\n--------------------------------------------------\n" << std::endl;

	{
		ClapTrap	c("Charlie");
		std::cout << std::endl;
		
		std::cout << "before damage HP: " << c.get_hit_points() << std::endl;
		c.takeDamage(3);
		std::cout << "after damage HP: " << c.get_hit_points() << std::endl;
		std::cout << std::endl;
		
		while (c.get_hit_points()) {
			c.takeDamage(3);
		}
		c.takeDamage(3);
		std::cout << std::endl;
	}
	
	std::cout << "\n==================================================" << std::endl;


	return (0);
}
