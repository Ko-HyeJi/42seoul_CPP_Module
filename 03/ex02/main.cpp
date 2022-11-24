/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:48:56 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 22:41:31 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main(void)
{	
	std::cout << "==================================================\n" << std::endl;	
	
	{
		FragTrap	a("Alpha");

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
		FragTrap	b("Bravo");
	
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
		FragTrap	c("Charlie");
		
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
		FragTrap	d("Delta");
		std::cout << std::endl;

		d.highFivesGuys();
		std::cout << std::endl;
		
		d.set_energy_points(0);
		d.printStatus();
		d.highFivesGuys();
		
		d.set_hit_points(0);
		d.printStatus();
		d.highFivesGuys();
		std::cout << std::endl;
	}

	std::cout << "\n==================================================\n" << std::endl;
	
	{
		/* upcasting virtual function */
		FragTrap *tmp = new FragTrap("hyko");
		tmp->highFivesGuys();
		delete tmp;
		std::cout << std::endl;
		
		
		ClapTrap *tmp2 = new FragTrap("hyko");
		// tmp2->highFivesGuys();
		delete tmp2;
		std::cout << std::endl;
	}

	std::cout << "\n==================================================" << std::endl;

	return (0);
}
