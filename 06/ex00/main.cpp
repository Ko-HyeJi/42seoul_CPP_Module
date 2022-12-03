/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:17 by hyko              #+#    #+#             */
/*   Updated: 2022/12/03 22:00:09 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Convert.hpp"

int main(int argc, char **argv)
{
    try
    {
        if (argc != 2)
            throw std::invalid_argument("[Exception] Too Many Argument");
        
        Convert convert(argv[1]);
        convert.execute();
        
    }
    catch (std::exception& e) 
	{
		std::cout << RED << e.what() << DEFAULT << std::endl;
	}		
    return (0);
}
