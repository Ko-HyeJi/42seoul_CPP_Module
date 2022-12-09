/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:57:10 by hyko              #+#    #+#             */
/*   Updated: 2022/12/09 16:03:00 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"
#include <list>

// int main(void)
// {
//     MutantStack<int> s1;
//     MutantStack<int> s2;

//     s1.push(1);
//     s1.push(2);
//     s1.push(3);
//     s1.push(4);
//     s1.push(5);

//     for (MutantStack<int>::iterator iter = s1.begin(); iter != s1.end(); iter++) {
//         std::cout << *iter << " ";
//     }
//     std::cout << std::endl;

//     for (MutantStack<int>::reverse_iterator iter = s1.rbegin(); iter != s1.rend(); iter++) {
//         std::cout << *iter << " ";
//     }
//     std::cout << std::endl;

//     /* compare with List */
//     std::list<int> lst;
//     MutantStack<int> mst;
//     for (int i = 0; i < 10; i++) {
//         lst.push_back(i);
//         mst.push(i);
//     }

//     std::cout << "list: " << std::endl;
//     for (std::list<int>::iterator iter = lst.begin(); iter != lst.end(); iter++)
//         std::cout << *iter << " ";
//     std::cout << std::endl;

//     std::cout << "MutantStack: " << std::endl;
//     for (MutantStack<int>::iterator iter = mst.begin(); iter != mst.end(); iter++)
//         std::cout << *iter << " ";
//     std::cout << std::endl;

//     return (0);
// }

int main()
{
    MutantStack<int>    mstack;
    
    mstack.push(5); 
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl; 
    
    mstack.pop();
    
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3); 
    mstack.push(5); 
    mstack.push(737); 
    //[...] 
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin(); 
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it; 
    }
    std::stack<int> s(mstack); 
    
    // std::cout << &mstack << std::endl;
    // std::cout << &s << std::endl;
    // std::cout << (s == mstack) << std::endl;
    
    return 0;
}
