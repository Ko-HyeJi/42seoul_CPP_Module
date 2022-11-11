/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:11:53 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 00:32:31 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
    void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
