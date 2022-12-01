/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:18:49 by hyko              #+#    #+#             */
/*   Updated: 2022/12/01 15:09:09 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

#define GRADE_MIN   150
#define GRADE_MAX   1

class Bureaucrat;

class AForm
{
private:
    const std::string	_name;
    bool				_signed;
    const int			_signGrade;
    const int			_execGrade;

public:
    AForm(const std::string name, const int signGrade, const int execGrade);
    AForm(const AForm& obj);
    virtual ~AForm(void);
    AForm& operator=(const AForm& obj);

	std::string	getName(void) const;
    bool		getSigned(void) const;
    int			getSignGrade(void) const;
    int			getExecGrade(void) const;

    class	GradeTooHighException : public std::exception {
        const char* what() const throw();
    };
    class   GradeTooLowException : public std::exception {
        const char* what() const throw();
    };

	void	beSigned(const Bureaucrat &bureaucrat);

	virtual void	execute(const Bureaucrat& executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& obj);

#endif
