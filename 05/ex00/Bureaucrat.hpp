/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:12:37 by hyko              #+#    #+#             */
/*   Updated: 2022/12/06 16:49:00 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#define DEFAULT "\033[0m"
#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"

#include <iostream>
#include <exception>

#define GRADE_MIN   150
#define GRADE_MAX   1

class Bureaucrat
{
private:
    const std::string	_name;
    int					_grade;
    Bureaucrat();
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat& operator=(const Bureaucrat &obj);

public:
    Bureaucrat(const std::string name, const int grade);
    ~Bureaucrat(void);

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
