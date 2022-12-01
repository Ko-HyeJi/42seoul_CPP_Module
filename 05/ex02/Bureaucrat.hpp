/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:37 by hyko              #+#    #+#             */
/*   Updated: 2022/12/01 17:56:38 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

#define GRADE_MIN   150
#define GRADE_MAX   1

class AForm;

class Bureaucrat
{
private:
    const std::string	_name;
    int					_grade;

public:
    Bureaucrat(const std::string name, const int grade);
    Bureaucrat(const Bureaucrat &obj);
    ~Bureaucrat(void);
    
    Bureaucrat& operator=(const Bureaucrat &obj);

    const std::string   getName(void) const;
    int                 getGrade(void) const;
    void                setGrade(const int grade);

    void        incrementGrade(void);
    void        decrementGrade(void);

    class	GradeTooHighException : public std::exception {
        const char* what() const throw();
    };
    class   GradeTooLowException : public std::exception {
        const char* what() const throw();
    };

	void	signForm(const AForm& form) const;
	void	executeForm(const AForm& form) const;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif
