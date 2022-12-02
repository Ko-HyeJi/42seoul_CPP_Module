/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:17 by hyko              #+#    #+#             */
/*   Updated: 2022/12/02 18:44:07 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
    try
    {
        if (argc != 2)
            return (1);
            // throw ();
        
        Convert convert(argv[1]);
        convert.checkDataType();
        
    }
    catch (std::exception& e) 
	{
		std::cout << RED << e.what() << WHITE << std::endl;
	}		
    return (0);
}
