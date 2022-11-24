/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:54:12 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 22:36:36 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{	
	std::cout << "==================================================\n" << std::endl;	
	
	{
		ScavTrap	a("Alpha");

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
		ScavTrap	b("Bravo");
	
		b.printStatus();		
		b.takeDamage(15);
		b.printStatus();		
		
		while (b.get_hit_points()) {
			b.takeDamage(15);
		}
		b.printStatus();		
		b.takeDamage(15);
		std::cout << std::endl;
	}

	std::cout << "\n==================================================\n" << std::endl;	

	{
		ScavTrap	c("Charlie");
		
		c.printStatus();
		c.beRepaired(15);
		c.printStatus();
		
		while (c.get_energy_points()) {
			c.beRepaired(15);
		}
		c.printStatus();
		c.beRepaired(15);

		c.set_hit_points(0);
		c.printStatus();
		c.beRepaired(15);
		std::cout << std::endl;
	}
	
	std::cout << "\n==================================================\n" << std::endl;	

	{
		ScavTrap	d("Delta");
	
		std::cout << std::endl;
		d.guardGate();
		
		d.set_energy_points(0);
		d.printStatus();
		d.guardGate();
		
		d.set_hit_points(0);
		d.printStatus();
		d.guardGate();
		std::cout << std::endl;
	}

	std::cout << "\n==================================================\n" << std::endl;
	
	{
		/* upcasting virtual function */
		ScavTrap *tmp = new ScavTrap("hyko");
		tmp->attack("target");
		tmp->guardGate();
		delete tmp;
		std::cout << std::endl;
		
		
		ClapTrap *tmp2 = new ScavTrap("hyko");
		tmp2->attack("target");	
		// tmp2->guardGate();
		delete tmp2;
		std::cout << std::endl;
	}

	std::cout << "\n==================================================" << std::endl;
	return (0);
}
