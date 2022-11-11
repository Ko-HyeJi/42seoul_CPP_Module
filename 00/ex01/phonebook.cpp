/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:22:20 by hyko              #+#    #+#             */
/*   Updated: 2022/11/11 20:24:39 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	print_one_line(std::string str)
{
	int	length = str.length();
	if (length < 10){
		for (int i = 10 - length; i; i--)
			std::cout << " ";
		std::cout << str << "|";
	}
	else if (length > 10){
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".|";
	}
	else
		std::cout << str << "|";	
}

void	PhoneBook::print_phonebook(void)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::string str;
	for (int i = 0; i < 8; i++){
		std::cout << "|";
		str = i + '0' + 1;
		print_one_line(str);
		str = contact[i].get_first_name();
		print_one_line(str);
		str = contact[i].get_last_name();
		print_one_line(str);
		str = contact[i].get_nickname();
		print_one_line(str);		
		std::cout << std::endl;
	}
	
	std::cout << "---------------------------------------------" << std::endl;
}

void	PhoneBook::add_contact(void)
{
	std::string	str;
	idx %= 8;
	
	while (1)
	{
		std::cout << "\nPlease enter first name" << std::endl << ">> ";
		std::getline(std::cin, str);
		if (str[0] && str[0] != ' ')
		{
			contact[idx].set_first_name(str);
			break;
		}	
	}
	
	std::cout << "\nPlease enter last name" << std::endl << ">> ";
	std::getline(std::cin, str);
	contact[idx].set_last_name(str);
	
	std::cout << "\nPlease enter nickname" << std::endl << ">> ";
	std::getline(std::cin, str);
	contact[idx].set_nickname(str);
	
	while (1)
	{
		std::cout << "\nPlease enter phone number" << std::endl << ">> ";
		std::getline(std::cin, str);
		if (str[0] && str[0] != ' ')
		{
			contact[idx].set_phone_number(str);
			break;
		}	
	}	
	
	std::cout << "\nPlease enter darkest secret" << std::endl << ">> ";
	std::getline(std::cin, str);
	contact[idx].set_darkest_secret(str);

	std::cout << "\n[Successfully saved a new contact]" << std::endl;
		
	idx++;
}

void	PhoneBook::search_contact(void)
{
	PhoneBook::print_phonebook();
	
	if (idx == 0)
	{
		std::cout << "\n[Phonebook is empty]" << std::endl;
		return ;
	}
	
	int	num;
	std::cout << "\nPlease enter the index number you want to display" << std::endl << ">> ";
	while (1)
	{
		std::cin.clear();
		clearerr(stdin);
		std::cin >> num;
		num--;
		if (num < 0 || num >= idx % 8)
			std::cout << "[Invalid index]\n" << std::endl << ">> ";
		else
		{
			contact[num].print_contact();
			std::cin.ignore();
			return ;
		}
	}
}
