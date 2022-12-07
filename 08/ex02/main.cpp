/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:57:10 by hyko              #+#    #+#             */
/*   Updated: 2022/12/07 19:19:41 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "MutantStack.hpp"

int main(void)
{
    MutantStack<int> s1;
    MutantStack<int> s2;


    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    for (MutantStack<int>::iterator it = s1.begin(); it != s1.end(); it++) {
        std::cout << *it << std::endl;
    }

    for (MutantStack<int>::reverse_iterator it = s1.rbegin(); it != s1.rend(); it++) {
        std::cout << *it << std::endl;
    }

    s2.push(1);
    std::cout << (s1 == s2) << std::endl;

    return (0);
}
