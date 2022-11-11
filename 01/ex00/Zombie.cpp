/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:23:22 by hyko              #+#    #+#             */
/*   Updated: 2022/11/11 23:20:19 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << _name << ": created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << ": destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
