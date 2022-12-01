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

// AForm::AForm() : _name("default"), _signed(0), _signGrade(0), _executeGrade(0)
// {
// 	std::cout << "default constructor called" << std::endl;
// }

AForm::AForm(const std::string name, const int signGrade, const int executeGrade) 
: _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) 
{
	if (_signGrade > GRADE_MIN || _executeGrade > GRADE_MIN)
		throw (GradeTooLowException());
	if (_signGrade < GRADE_MAX || _executeGrade < GRADE_MAX)
		throw (GradeTooHighException());
    std::cout << "AForm " << _name << " created" << std::endl;
}

AForm::AForm(const AForm& obj) : _signGrade(0), _executeGrade(0)
{
	*this = obj;
	std::cout << "Form " << _name << " copied" << std::endl;
}

AForm::~AForm(void)
{
    std::cout << "AForm " << _name << " destroyed" << std::endl;
}

AForm& AForm::operator=(const AForm& obj)
{
	if (this != &obj) {
		*(const_cast<std::string*>(&_name)) = obj.getName();
		_signed = obj.getSigned();
		*(const_cast<int*>(&_signGrade)) = obj.getSignGrade();
		*(const_cast<int*>(&_executeGrade)) = obj.getExecuteGrade();
	}
	return (*this);
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

int	AForm::getExecuteGrade(void) const
{
	return (_executeGrade);
}


const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade Too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade Too Low");
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	bureaucrat.signForm(*this);
}

std::ostream& operator<<(std::ostream& out, const AForm& obj)
{
	return(out << "********************" \
	<< "\nName : " << obj.getName() \
	<< "\nSigned : " << std::boolalpha << obj.getSigned() \
	<< "\nSignGrade : " << obj.getSignGrade() \
	<< "\nExecuteGrade : " << obj.getExecuteGrade() \
	<< "\n********************");
}
