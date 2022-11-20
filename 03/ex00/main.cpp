/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:52:45 by hyko              #+#    #+#             */
/*   Updated: 2022/11/21 02:30:11 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("aaa");
	
	std::cout << "==================================================" << std::endl;
	
	std::cout << "before attack EP: " << a.get_energy_points() << std::endl;
	a.attack("bbb");
	std::cout << "after attack EP: " << a.get_energy_points() << std::endl;
	std::cout << std::endl;
	
	std::cout << "before repair EP: " << a.get_energy_points() << "  HP: " << a.get_hit_points() << std::endl;
	a.beRepaired(5);
	std::cout << "after repair EP: " << a.get_energy_points() << "  HP: " << a.get_hit_points() << std::endl;
	std::cout << std::endl;
	
	std::cout << "before repair EP: " << a.get_energy_points() << "  HP: " << a.get_hit_points() << std::endl;
	a.beRepaired(10);
	std::cout << "after repair EP: " << a.get_energy_points() << "  HP: " << a.get_hit_points() << std::endl;
	std::cout << std::endl;
	
	std::cout << "before damage HP: " << a.get_hit_points() << std::endl;
	a.takeDamage(5);
	std::cout << "after damage HP: " << a.get_hit_points() << std::endl;
	std::cout << std::endl;
	
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	
	std::cout << "==================================================" << std::endl;


	return (0);
}
