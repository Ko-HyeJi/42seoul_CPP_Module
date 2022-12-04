/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:18:47 by hyko              #+#    #+#             */
/*   Updated: 2022/12/01 15:10:25 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string name, const int signGrade, const int execGrade) 
: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) 
{
	if (_signGrade > GRADE_MIN || _execGrade > GRADE_MIN)
		throw (GradeTooLowException());
	if (_signGrade < GRADE_MAX || _execGrade < GRADE_MAX)
		throw (GradeTooHighException());
    std::cout << YELLOW << "AForm \"" << _name << "\" created"  << WHITE << std::endl;
}

AForm::~AForm(void)
{
    std::cout << YELLOW << "AForm \"" << _name << "\" destroyed" << WHITE << std::endl;
}

std::string	AForm::getName(void) const
{
	return (_name);
}

bool	AForm::getSigned(void) const
{
	return (_signed);
}

int	AForm::getSignGrade(void) const
{
	return (_signGrade);
}

int	AForm::getExecGrade(void) const
{
	return (_execGrade);
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("[Exception] Grade Too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("[Exception] Grade Too Low");
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	bureaucrat.signForm(*this);
}

std::ostream& operator<<(std::ostream& out, const AForm& obj)
{
	return(out << CYAN << "************ FORM ************" \
	<< "\nName : " << obj.getName() \
	<< "\nSigned : " << std::boolalpha << obj.getSigned() \
	<< "\nSignGrade : " << obj.getSignGrade() \
	<< "\nExecGrade : " << obj.getExecGrade() \
	<< "\n******************************" << WHITE);
}
