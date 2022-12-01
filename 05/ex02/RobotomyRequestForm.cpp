/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:47 by hyko              #+#    #+#             */
/*   Updated: 2022/12/02 05:09:21 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << YELLOW << "RobotomyRequestForm \"" << this->getTarget() << "\" created" << WHITE << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& obj) 
: AForm(obj), _target(obj.getTarget())
{
	std::cout << YELLOW << "RobotomyRequestForm \"" << this->getTarget() << "\" copied" << WHITE << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << YELLOW << "RobotomyRequestForm \"" << this->getTarget() << "\" destroyed" << WHITE << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	return *(dynamic_cast<RobotomyRequestForm*>(&(AForm::operator=(obj)))); //dynamic_cast
}

const std::string	RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}

void	RobotomyRequestForm::setTarget(const std::string target)
{
	*(const_cast<std::string*>(&_target)) = target;
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
