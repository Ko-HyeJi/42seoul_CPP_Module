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
	void	(Harl::*ptrComplain)(std::string level) = &Harl::complain;

	if (argc == 2) {
		std::string level = argv[1];
		(harl.*ptrComplain)(level);
	}

	return (0);
}
