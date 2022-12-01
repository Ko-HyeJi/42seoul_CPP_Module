/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:38 by hyko              #+#    #+#             */
/*   Updated: 2022/12/02 05:10:40 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat b("human", 1);
	{
		try
		{
			ShrubberyCreationForm f("SCF"); std::cout << std::endl;
			
			std::cout << b << "\n" << std::endl;
			std::cout << f << "\n" << std::endl;
			f.beSigned(b);
			std::cout << f << "\n" << std::endl;
			f.execute(b); std::cout << std::endl;
		}
		catch (std::exception& e) 
		{
			std::cout << RED << e.what() << WHITE << std::endl;
		}		
	}
	std::cout << "\n================================================================================\n" << std::endl;
	{
		try
		{
			RobotomyRequestForm f("RRF"); std::cout << std::endl;
			
			std::cout << b << "\n" << std::endl;
			std::cout << f << "\n" << std::endl;
			f.beSigned(b);
			std::cout << f << "\n" << std::endl;
			f.execute(b); std::cout << std::endl;	
		}
		catch (std::exception& e) 
		{
			std::cout << RED << e.what() << WHITE << std::endl;
		}		
	}
	std::cout << "\n================================================================================\n" << std::endl;
	{
		try
		{
			PresidentialPardonForm f("PPF"); std::cout << std::endl;
			
			std::cout << b << "\n" << std::endl;
			std::cout << f << "\n" << std::endl;
			f.beSigned(b);
			std::cout << f << "\n" << std::endl;
			f.execute(b); std::cout << std::endl;	
		}
		catch (std::exception& e) 
		{
			std::cout << RED << e.what() << WHITE << std::endl;
		}		
	}
    return (0);
}
