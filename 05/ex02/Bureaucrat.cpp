/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:35 by hyko              #+#    #+#             */
/*   Updated: 2022/12/01 17:58:48 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name), _grade(grade)
{
	if (_grade > GRADE_MIN)
		throw (GradeTooLowException());
	if (_grade < GRADE_MAX)
		throw (GradeTooHighException());
	std::cout << "Bureaucrat " << getName() << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
	std::cout << "Bureaucrat " << getName() << " copied" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << getName() << " destroyed" << std::endl;	
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj) {
		*(const_cast<std::string*>(&_name)) = obj.getName(); //const_cast
		this->_grade = obj.getGrade();
	}
	return (*this);
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
	return ("Exception: Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade Too Low");
}

void	Bureaucrat::signForm(const AForm& form) const
{
	if (form.getSigned() == true)
		std::cout << "<" << this->getName() <<  "> signed <" << form.getName() << ">" << std::endl;
	else
		std::cout << "<" << this->getName() <<  "> couldn’t sign <" << form.getName() << "> because <Grade Too Low>" << std::endl;
}

void	Bureaucrat::executeForm(const AForm& form) const
{
	std::cout << "<" << this->getName() <<  "> executed <" << form.getName() << ">" << std::endl;
	// if (form.getSigned() == true)
	// 	std::cout << "<" << this->getName() <<  "> signed <" << form.getName() << ">" << std::endl;
	// else
	// 	std::cout << "<" << this->getName() <<  "> couldn’t sign <" << form.getName() << "> because <Grade Too Low>" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj)
{
	return(out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".");
}
