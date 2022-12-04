/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:47 by hyko              #+#    #+#             */
/*   Updated: 2022/12/04 15:48:06 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << YELLOW << "RobotomyRequestForm \"" << this->getTarget() << "\" created" << WHITE << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << YELLOW << "RobotomyRequestForm \"" << this->getTarget() << "\" destroyed" << WHITE << std::endl;
}

const std::string	RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	executor.executeForm(*this);
	this->_makeDrillingNoise();
}

void	RobotomyRequestForm::_makeDrillingNoise(void) const
{
	std::cout << PURPLE << "Drrrrrrrrrrrrrrrr.....!" << WHITE << std::endl;
	int randValue = std::rand();
	if (randValue < (RAND_MAX / 2))
		std::cout << PURPLE << "<" << getTarget() << "> has been robotomized successfully" << WHITE << std::endl;
	else
		std::cout << PURPLE << "<" << getTarget() << "> failed to be robotomized" << WHITE <<std::endl;
}
