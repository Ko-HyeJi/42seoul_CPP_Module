/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:17 by hyko              #+#    #+#             */
/*   Updated: 2022/12/05 14:39:02 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Convert.hpp"

int main(int argc, char **argv)
{
    try
    {
        if (argc != 2)
			throw ("Too Many Argument");
        
        Convert convert(argv[1]);
        convert.execute();
        
    }
    catch (const char* err) 
	{
		std::cout << RED << err << DEFAULT << std::endl;
	}		
    return (0);
}
