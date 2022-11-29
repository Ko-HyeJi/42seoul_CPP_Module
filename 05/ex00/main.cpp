/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:38 by hyko              #+#    #+#             */
/*   Updated: 2022/11/29 17:49:30 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>

int main(void)
{
    try
    {
        Bureaucrat a("hyko", 145);
        
        a.setGrade(2);
        std::cout << a << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
        
        while (1) {
            a.decrementGrade();
            std::cout << a << std::endl;
        }
        
    }
    catch (std::exception& e) 
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
