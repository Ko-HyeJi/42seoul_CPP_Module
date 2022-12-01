/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:38 by hyko              #+#    #+#             */
/*   Updated: 2022/12/02 03:36:02 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
    try
    {
        Form f("form", 100, 100);
		std::cout << f << std::endl;
		
		Bureaucrat b("bureaucrat", 99);
		f.beSigned(b);
		std::cout << f << std::endl;
    }
    catch (std::exception& e) 
    {
        std::cout << RED << e.what() << WHITE << std::endl;
    }
    return (0);
}
