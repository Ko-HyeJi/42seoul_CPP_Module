/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:57:10 by hyko              #+#    #+#             */
/*   Updated: 2022/12/09 11:37:08 by hyko             ###   ########.fr       */
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

    for (MutantStack<int>::iterator iter = s1.begin(); iter != s1.end(); iter++) {
        std::cout << *iter << std::endl;
    }

    for (MutantStack<int>::reverse_iterator iter = s1.rbegin(); iter != s1.rend(); iter++) {
        std::cout << *iter << std::endl;
    }

    s2.push(1);
    std::cout << (s1 == s2) << std::endl;

    
    MutantStack<int> s3(s1);
    std::cout << "s3 copied from s1" << std::endl;
    for (MutantStack<int>::iterator iter = s3.begin(); iter != s3.end(); iter++) {
        std::cout << *iter << std::endl;
    }
    s3 = s2;
    std::cout << "s3 copied from s2" << std::endl;
    for (MutantStack<int>::iterator iter = s3.begin(); iter != s3.end(); iter++) {
        std::cout << *iter << std::endl;
    }
    

    
    const MutantStack<int> cs(s1);
    for (MutantStack<int>::const_iterator iter = cs.begin(); iter != cs.end(); iter++) {
        std::cout << *iter << std::endl;
    }
    
    return (0);
}
