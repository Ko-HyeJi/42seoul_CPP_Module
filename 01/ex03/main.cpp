/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:29:32 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 02:27:42 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    // {
    //     Weapon club = Weapon("crude spike club");
        
    //     HumanA bob("Bob, club");
    //     bob.attack();
    //     club.setType("some other type of club");
    //     bob.attack();
    // }
    // {
    //     Weapon club = Weapon("crude spiked club");
        
    //     HumanB jim("Jim");
    //     jim.setWeapon(club);
    //     jim.attack();
    //     club.setType("some other type of club");
    //     jim.attack();
    // }
    
    HumanA("gun", "hyko");
    
    return (0);
}
