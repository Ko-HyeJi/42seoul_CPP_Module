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

//생성자에 무기X
//무기 없을수도 있음
//B의 weapon은 포인터? -> 참조자는 처음 선언될 때 초기화 되어야 하고 한 번 설정되면 변경이 불가능, B는 무기를 갖지 않고 시작하기 때문에... 

class HumanB
{
private:
    std::string _name;
    // Weapon _weapon;
    Weapon* _weapon; //???
    
public:
    HumanB(std::string name);
    ~HumanB();
    void attack(void);   
    void setWeapon(Weapon& weapon);
};

#endif
