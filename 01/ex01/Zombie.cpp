/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:18:04 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 00:44:33 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    _name = "(null)";
    std::cout << "Zombie " << _name << ": created" << std::endl;
}

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << "Zombie " << _name << ": created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << ": destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "Zombie " << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}
