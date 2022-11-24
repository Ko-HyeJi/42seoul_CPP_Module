/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:52:45 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 21:38:33 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{	
	std::cout << "==================================================\n" << std::endl;	
	
	{
		/* attack */
		ClapTrap	a("Alpha");
		
		a.printStatus();
		a.attack("target");
		a.printStatus();

		while (a.get_energy_points()) {
			a.attack("target");
		}
		a.printStatus();
		a.attack("target");
		
		a.set_hit_points(0);
		a.printStatus();
		a.attack("target");
		std::cout << std::endl;
	}
	
	std::cout << "\n==================================================\n" << std::endl;	

	{
		/* damage */
		ClapTrap	b("Bravo");

		b.printStatus();		
		b.takeDamage(3);
		b.printStatus();		
		
		while (b.get_hit_points()) {
			b.takeDamage(3);
		}
		b.printStatus();
		b.takeDamage(3);
		std::cout << std::endl;
	}

	std::cout << "\n==================================================\n" << std::endl;	

	{
		/* repair */
		ClapTrap	c("Charlie");

		c.printStatus();		
		c.beRepaired(3);
		c.printStatus();		
		
		while (c.get_energy_points()) {
			c.beRepaired(3);
		}
		c.printStatus();
		c.beRepaired(3);

		c.set_hit_points(0);
		c.printStatus();
		c.beRepaired(3);
		std::cout << std::endl;
	}

	std::cout << "\n==================================================" << std::endl;

	return (0);
}