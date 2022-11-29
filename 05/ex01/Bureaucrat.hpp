/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:37 by hyko              #+#    #+#             */
/*   Updated: 2022/11/29 16:15:32 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

#define GRADE_MIN   150
#define GRADE_MAX   1

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
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif
