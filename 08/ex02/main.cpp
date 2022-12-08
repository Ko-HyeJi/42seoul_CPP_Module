/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:57:10 by hyko              #+#    #+#             */
/*   Updated: 2022/12/08 22:27:47 by hyko             ###   ########.fr       */
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

    
    MutantStack<int> s3(s1);
    std::cout << "s3 copied from s1" << std::endl;
    for (MutantStack<int>::iterator it = s3.begin(); it != s3.end(); it++) {
        std::cout << *it << std::endl;
    }
    s3 = s2;
    std::cout << "s3 copied from s2" << std::endl;
    for (MutantStack<int>::iterator it = s3.begin(); it != s3.end(); it++) {
        std::cout << *it << std::endl;
    }
    

    
    const MutantStack<int> cs(s1); // -> 복사 생성자 말고는 값을 넣을 방법이 없겠죠?
    for (MutantStack<int>::const_iterator it = cs.begin(); it != cs.end(); it++) {
        std::cout << *it << std::endl;
    }

    
    return (0);
}
