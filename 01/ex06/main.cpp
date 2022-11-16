/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:56:20 by hyko              #+#    #+#             */
/*   Updated: 2022/11/14 01:00:25 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2){
		std::cout << "[WRONG ARGUMENT]" << std::endl;
		return (1);
	}

	std::string level = argv[1];
	harl.complain(level);

	return (0);
}
