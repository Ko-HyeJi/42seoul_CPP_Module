/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:18:47 by hyko              #+#    #+#             */
/*   Updated: 2022/12/04 15:31:29 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int signGrade, const int execGrade) 
: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) 
{
	if (_signGrade > GRADE_MIN || _execGrade > GRADE_MIN)
		throw (GradeTooLowException());
	if (_signGrade < GRADE_MAX || _execGrade < GRADE_MAX)
		throw (GradeTooHighException());
    std::cout << YELLOW << "Form \"" << _name << "\" created" << WHITE << std::endl;
}

Form::~Form(void)
{
    std::cout << YELLOW << "Form \"" << _name << "\" destroyed" << WHITE << std::endl;
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

int	Form::getExecGrade(void) const
{
	return (_execGrade);
}


const char*	Form::GradeTooHighException::what() const throw()
{
	return ("[Exception] Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("[Exception] Grade Too Low");
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	bureaucrat.signForm(*this);
}

std::ostream& operator<<(std::ostream& out, const Form& obj)
{
	return(out << CYAN << "************ FORM ************" \
	<< "\nName : " << obj.getName() \
	<< "\nSigned : " << std::boolalpha << obj.getSigned() \
	<< "\nSignGrade : " << obj.getSignGrade() \
	<< "\nExecGrade : " << obj.getExecGrade() \
	<< "\n******************************" << WHITE);
}
