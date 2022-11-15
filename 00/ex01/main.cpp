/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:35:54 by hyko              #+#    #+#             */
/*   Updated: 2022/11/11 20:04:44 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string cmd;
	PhoneBook	phonebook;
	
	while (1) {
		std::cout << "=================== Phone Book ===================" << std::endl;
		std::cout << "Please enter one of 'ADD', 'SEARCH', 'EXIT'" << std::endl;
		std::cout << ">> ";
		
		std::cin.clear();
		clearerr(stdin);
		std::getline(std::cin, cmd);
		if (cmd.compare("EXIT") == 0 || cmd.compare("exit") == 0){
			std::cout << "==================================================" << std::endl;
			exit(0);
		}
		else if (cmd.compare("ADD") == 0 || cmd.compare("add") == 0){
			phonebook.add_contact();
			std::cout << std::endl;
		}
		else if (cmd.compare("SEARCH") == 0 || cmd.compare("search") == 0){
			phonebook.search_contact();
			std::cout << std::endl;
		}
		else
			std::cout << "\n[WRONG REQUEST]\n" << std::endl;
	}
	return (0);
}
