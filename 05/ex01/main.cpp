/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:38 by hyko              #+#    #+#             */
/*   Updated: 2022/12/01 16:30:33 by hyko             ###   ########.fr       */
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
        std::cout << e.what() << std::endl;
    }
    return (0);
}
