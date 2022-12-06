/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:38 by hyko              #+#    #+#             */
/*   Updated: 2022/12/06 17:12:04 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	try 
	{
		Intern	someRandomIntern;
		AForm*	rrf;
		
		rrf = someRandomIntern.makeForm("robotomy request", "Bende3r");
		std::cout << "name: " << rrf->getName() << std::endl;
		std::cout << "target: " << rrf->getTarget() << std::endl;
		delete rrf;
	}
	catch (std::exception& e) 
	{
		std::cout << RED << e.what() << WHITE << std::endl;
	}		
	return (0);
}
