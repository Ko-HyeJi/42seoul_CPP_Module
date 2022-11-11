/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:12:04 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 03:07:41 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    // Weapon _weapon;
    Weapon &_weapon;
    
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack(void);
    void setWeapon(Weapon weapon);
};

#endif
