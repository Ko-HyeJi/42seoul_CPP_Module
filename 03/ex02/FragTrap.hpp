/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:48:53 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 04:25:10 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	/* constructors & destructors */
	FragTrap(void);
	FragTrap(std::string Name);
	FragTrap(FragTrap& obj);
	~FragTrap(void);

	/* assignment operator */
	FragTrap& operator=(FragTrap& obj);

	/* member functions */	
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif