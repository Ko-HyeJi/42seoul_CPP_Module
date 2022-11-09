/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:35:54 by hyko              #+#    #+#             */
/*   Updated: 2022/11/09 22:46:40 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	std::string cmd;
	PhoneBook	phonebook;
	
	while (1){
		std::cout << "=================== Phone Book ===================\n";
		std::cout << "Please enter one of 'ADD', 'SEARCH', 'EXIT'\n";
		std::cout << ">> ";
		
		std::cin >> cmd;
		if (cmd.compare("EXIT") == 0 || cmd.compare("exit") == 0){
			std::cout << "==================================================\n";
			exit(0);
		}
		else if (cmd.compare("ADD") == 0 || cmd.compare("add") == 0){
			// phonebook.add_new_contact();
			std::cout << "\n";
		}
		else if (cmd.compare("SEARCH") == 0 || cmd.compare("search") == 0){
			// phonebook.search_contact();
			std::cout << "\n";
		}
		else
			std::cout << "\n[WRONG REQUEST]\n";
	}
	return (0);
}