/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:18:49 by hyko              #+#    #+#             */
/*   Updated: 2022/12/01 15:09:09 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

#define GRADE_MIN   150
#define GRADE_MAX   1

class Bureaucrat;

class Form
{
private:
    const std::string	_name;
    bool				_signed;
    const int			_signGrade;
    const int			_executeGrade;

public:
    Form(const std::string name, const int signGrade, const int executeGrade);
    Form(const Form& obj);
    ~Form(void);
    Form& operator=(const Form& obj);

	std::string	getName(void) const;
    bool		getSigned(void) const;
    int			getSignGrade(void) const;
    int			getExecuteGrade(void) const;

    class	GradeTooHighException : public std::exception {
        const char* what() const throw();
    };
    class   GradeTooLowException : public std::exception {
        const char* what() const throw();
    };

	void	beSigned(const Bureaucrat &bureaucrat);

};

std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif
