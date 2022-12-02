/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:43 by hyko              #+#    #+#             */
/*   Updated: 2022/12/02 05:09:01 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << YELLOW << "PresidentialPardonForm \"" << this->getTarget() << "\" created" << WHITE << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& obj) 
: AForm(obj), _target(obj.getTarget())
{
	std::cout << YELLOW << "PresidentialPardonForm \"" << this->getTarget() << "\" copied" << WHITE << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << YELLOW << "PresidentialPardonForm \"" << this->getTarget() << "\" destroyed" << WHITE << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	return *(dynamic_cast<PresidentialPardonForm*>(&(AForm::operator=(obj)))); //dynamic_cast
}

const std::string	PresidentialPardonForm::getTarget(void) const
{
	return (_target);
}

void	PresidentialPardonForm::setTarget(const std::string target)
{
	*(const_cast<std::string*>(&_target)) = target;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	executor.executeForm(*this);
	this->_pardon();
}

void	PresidentialPardonForm::_pardon(void) const
{
	std::cout << PURPLE << "<" << getTarget() << "> has been pardoned by Zaphod Beeblebrox" << WHITE << std::endl;
}
