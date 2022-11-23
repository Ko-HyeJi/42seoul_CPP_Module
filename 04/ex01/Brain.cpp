/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:46:20 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 13:01:30 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	*this = obj;
	std::cout << "Brain copied" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain&	Brain::operator=(const Brain& obj)
{
	std::cout << "Assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = obj.ideas[i];
	}
	return (*this);	
}

std::string	Brain::getIdea(const int idx) const
{
	if (idx >= 0 && idx < 100)
		return (this->ideas[idx]);
	return (0);
}

void	Brain::setIdea(const int idx, const std::string idea)
{
	if (idx >= 0 && idx < 100)
		this->ideas[idx] = idea;
}
