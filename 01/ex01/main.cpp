/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:13:37 by hyko              #+#    #+#             */
/*   Updated: 2022/11/12 00:43:30 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N = 5;
    std::string name = "hyko";
    
    Zombie *horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++){
        horde[i].announce();
    }
    delete[] horde;
   
    return (0);
}
