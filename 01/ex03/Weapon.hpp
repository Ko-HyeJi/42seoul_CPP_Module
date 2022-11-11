/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:10:12 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 02:10:34 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon();
    ~Weapon();
    const std::string& getType(void);
    void setType(std::string type);
};

#endif
