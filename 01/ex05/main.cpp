/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:26:20 by hyko              #+#    #+#             */
/*   Updated: 2022/11/14 00:36:41 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	void	(Harl::*ptrComplain)(std::string level) = &Harl::complain;

	(harl.*ptrComplain)("DEBUG");
	(harl.*ptrComplain)("INFO");
	(harl.*ptrComplain)("WARNING");
	(harl.*ptrComplain)("ERROR");

	return (0);
}
