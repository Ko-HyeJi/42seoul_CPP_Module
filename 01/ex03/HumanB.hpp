/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:12:07 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 03:08:02 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    // Weapon _weapon;
    Weapon *_weapon;
    
public:
    HumanB(std::string name);
    HumanB(std::string name, Weapon weapon);
    ~HumanB();
    void attack(void);   
    void setWeapon(Weapon &weapon);
};

#endif
