/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:35 by hyko              #+#    #+#             */
/*   Updated: 2022/12/06 16:49:12 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name), _grade(grade)
{
	if (_grade > GRADE_MIN)
		throw (GradeTooLowException());
	if (_grade < GRADE_MAX)
		throw (GradeTooHighException());
	std::cout << YELLOW << "Bureaucrat \"" << getName() << "\" created" << WHITE << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << YELLOW << "Bureaucrat \"" << getName() << "\" destroyed" << WHITE << std::endl;	
}

const std::string Bureaucrat::getName(void) const
{
	return (this->_name);	
}

int         Bureaucrat::getGrade(void) const
{
	return (this->_grade);	
}

void        Bureaucrat::setGrade(const int grade)
{
	this->_grade = grade;
	if (_grade > GRADE_MIN)
		throw (GradeTooLowException());
	if (_grade < GRADE_MAX)
		throw (GradeTooHighException());
}

void        Bureaucrat::incrementGrade(void)
{
	if (--_grade < GRADE_MAX)
		throw (GradeTooHighException());
}

void        Bureaucrat::decrementGrade(void)
{
	if (++_grade > GRADE_MIN)
		throw (GradeTooLowException());
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("[Exception] Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("[Exception] Grade Too Low");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj)
{
	return(out << CYAN << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << WHITE);
}
