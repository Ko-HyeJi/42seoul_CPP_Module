/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:18:47 by hyko              #+#    #+#             */
/*   Updated: 2022/11/29 16:43:41 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int signGrade, const int executeGrade) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) 
{
    std::cout << "Form " << _name << " created" << std::endl;
	if (_signGrade > GRADE_MIN || _executeGrade > GRADE_MIN)
		throw (GradeTooLowException());
	if (_signGrade < GRADE_MAX || _executeGrade < GRADE_MAX)
		throw (GradeTooHighException());
}

Form::~Form(void)
{
    std::cout << "Form " << _name << " created" << std::endl;
}

// Form& Form::operator=(const Form &obj)
// {
// 	if (this != &obj) {
// 		*(const_cast<std::string*>(&_name)) = obj.getName(); //const_cast
// 		this->_grade = obj.getGrade();
// 	}
// 	return (*this);
// }

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade Too Low");
}

std::ostream& operator<<(std::ostream& out, const Form& obj)
{
	return(out << );
}
