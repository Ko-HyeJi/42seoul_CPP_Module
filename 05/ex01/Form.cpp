/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:18:47 by hyko              #+#    #+#             */
/*   Updated: 2022/12/01 16:29:25 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int signGrade, const int executeGrade) 
: _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) 
{
	if (_signGrade > GRADE_MIN || _executeGrade > GRADE_MIN)
		throw (GradeTooLowException());
	if (_signGrade < GRADE_MAX || _executeGrade < GRADE_MAX)
		throw (GradeTooHighException());
    std::cout << "Form " << _name << " created" << std::endl;
}
Form::Form(const Form& obj) : _signGrade(0), _executeGrade(0)
{
	*this = obj;
	std::cout << "Form " << _name << " copied" << std::endl;
}

Form::~Form(void)
{
    std::cout << "Form " << _name << " destroyed" << std::endl;
}

Form& Form::operator=(const Form& obj)
{
	if (this != &obj) {
		*(const_cast<std::string*>(&_name)) = obj.getName();
		_signed = obj.getSigned();
		*(const_cast<int*>(&_signGrade)) = obj.getSignGrade();
		*(const_cast<int*>(&_executeGrade)) = obj.getExecuteGrade();
	}
	return (*this);
}

std::string	Form::getName(void) const
{
	return (_name);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

int	Form::getSignGrade(void) const
{
	return (_signGrade);
}

int	Form::getExecuteGrade(void) const
{
	return (_executeGrade);
}


const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade Too Low");
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	bureaucrat.signForm(*this);
}

std::ostream& operator<<(std::ostream& out, const Form& obj)
{
	return(out << "********************" \
	<< "\nName : " << obj.getName() \
	<< "\nSigned : " << std::boolalpha << obj.getSigned() \
	<< "\nSignGrade : " << obj.getSignGrade() \
	<< "\nExecuteGrade : " << obj.getExecuteGrade() \
	<< "\n********************");
}
