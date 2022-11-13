/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:26:22 by hyko              #+#    #+#             */
/*   Updated: 2022/11/14 00:51:59 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HARL_HPP
# define HARL_HPP

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	
public:
	void	complain(std::string level);
};

#endif