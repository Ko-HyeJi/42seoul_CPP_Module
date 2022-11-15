/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:48:07 by hyko              #+#    #+#             */
/*   Updated: 2022/11/11 20:31:56 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void getUpperString(std::string& str)
{
	for (int i = 0; str[i]; i++){
		if (std::islower(str[i]))
			str[i] = std::toupper(str[i]);
	}
}

int main(int argc, char **argv)
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	std::string str;
	for (int i = 1; i < argc; i++){
		str = argv[i];
		getUpperString(str);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
