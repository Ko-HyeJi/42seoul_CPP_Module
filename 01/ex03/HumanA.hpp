/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:12:04 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 02:25:26 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon _weapon;
    std::string _name;
    
public:
    HumanA(std::string weapon, std::string name);
    ~HumanA();
    void attack(void);    
};

#endif
