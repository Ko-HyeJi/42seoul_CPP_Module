/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:46:38 by hyko              #+#    #+#             */
/*   Updated: 2022/12/07 04:57:45 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int			intArr[5] = {1, 2, 3, 4, 5};
    float		floatArr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char		charArr[5] = {'a', 'b', 'c', 'd', 'e'};
    std::string	stringArr[3] = {"hello", "42", "seoul"};

    iter(intArr, sizeof(intArr) / sizeof(int), printFunc);
    iter(floatArr, sizeof(floatArr) / sizeof(float), printFunc);
    iter(charArr, sizeof(charArr) / sizeof(char), printFunc);
    iter(stringArr, sizeof(stringArr) / sizeof(std::string), printFunc);
}
