/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:25:50 by hyko              #+#    #+#             */
/*   Updated: 2022/11/10 20:34:48 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_first_name(void)
{
	return (first_name);
}

std::string Contact::get_last_name(void)
{
	return (last_name);
}

std::string Contact::get_nickname(void)
{
	return (nickname);
}

std::string Contact::get_phone_number(void)
{
	return (phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return (darkest_secret);
}

void Contact::set_first_name(std::string str)
{
	first_name = str;
}

void Contact::set_last_name(std::string str)
{
	last_name = str;
}

void Contact::set_nickname(std::string str)
{
	nickname = str;
}

void Contact::set_phone_number(std::string str)
{
	phone_number = str;
}

void Contact::set_darkest_secret(std::string str)
{
	darkest_secret = str;
}

void Contact::print_contact(void)
{
	std::cout << "\n";
	std::cout << "First Name : " << first_name << "\n";
	std::cout << "Last Name : " << last_name << "\n";
	std::cout << "Nickname : " << nickname << "\n";
	std::cout << "Phone Number : " << phone_number << "\n";
	std::cout << "Darkest Secret : " << darkest_secret << "\n";
}