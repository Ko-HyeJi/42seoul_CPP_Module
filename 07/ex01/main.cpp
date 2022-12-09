/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:46:38 by hyko              #+#    #+#             */
/*   Updated: 2022/12/09 13:38:28 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printer(const T& t) {
    std::cout << t << " ";
}

int main(void)
{
    int			intArr[5] = {1, 2, 3, 4, 5};
    float		floatArr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char		charArr[5] = {'a', 'b', 'c', 'd', 'e'};
    std::string	stringArr[3] = {"hello", "42", "seoul"};
    const int 	constIntArr[5] = {1, 2, 3, 4, 5};
    
    std::cout << "\ncalling iter with printer" << std::endl;
    iter(intArr, sizeof(intArr) / sizeof(int), printer);
    std::cout << "\ncalling iter with printer" << std::endl;
    iter(charArr, sizeof(charArr) / sizeof(char), printer);
    std::cout << "\ncalling iter with printer" << std::endl;
    iter(floatArr, sizeof(floatArr) / sizeof(float), printer);
    std::cout << "\ncalling iter with printer" << std::endl;
    iter(stringArr, sizeof(stringArr) / sizeof(std::string), printer);
    std::cout << std::endl;
    
    std::cout << "\ncalling iter with printer" << std::endl;
    iter(intArr, sizeof(intArr) / sizeof(int), printer);
    std::cout << "\ncalling iter with printer" << std::endl;
    iter(constIntArr, sizeof(constIntArr) / sizeof(const int), printer);
    std::cout << std::endl;
}
