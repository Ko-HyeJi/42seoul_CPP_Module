/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:38 by hyko              #+#    #+#             */
/*   Updated: 2022/11/29 16:28:04 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>

int main(void)
{
    try
    {
        std::cout << false << std::endl;
        
    }
    catch (std::exception& e) 
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
