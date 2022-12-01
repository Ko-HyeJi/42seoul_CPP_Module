/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:38 by hyko              #+#    #+#             */
/*   Updated: 2022/12/01 18:22:32 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try
    {
		Bureaucrat b1("hyko", 1);
		// Bureaucrat b2("yotak", 70);
		// Bureaucrat b3("yeju", 140);

        ShrubberyCreationForm f1("home");
		f1.execute(b1);
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
    }
    catch (std::exception& e) 
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
