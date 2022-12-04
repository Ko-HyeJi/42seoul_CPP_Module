/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:35 by hyko              #+#    #+#             */
/*   Updated: 2022/12/04 15:32:47 by hyko             ###   ########.fr       */
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

const char* Bureaucrat::NotSignedException::what() const throw()
{
	return ("[Exception] Form Not Signed");
}

void	Bureaucrat::signForm(const AForm& form) const
{
	if (form.getSigned() == true)
		std::cout << "<" << this->getName() <<  "> signed <" << form.getName() << ">" << std::endl;
	else {
		std::cout << "<" << this->getName() <<  "> couldn’t sign <" << form.getName() << "> because <Grade Too Low>" << std::endl;
		throw (GradeTooLowException());
	}
}

void	Bureaucrat::executeForm(const AForm& form) const
{
	if (form.getSigned() == false) {
		std::cout << "<" << this->getName() <<  "> couldn’t execute <" << form.getName() << "> because <Form Not Signed>" << std::endl;
		throw (NotSignedException());
	}
	else if (this->getGrade() > form.getExecGrade()) {
		std::cout << "<" << this->getName() <<  "> couldn’t execute <" << form.getName() << "> because <Grade Too Low>" << std::endl;
		throw (GradeTooLowException());
	}
	else
		std::cout << "<" << this->getName() <<  "> executed <" << form.getName() << ">" << std::endl;

}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj)
{
	return(out << CYAN << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << WHITE);
}
