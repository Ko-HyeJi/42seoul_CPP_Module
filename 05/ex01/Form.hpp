/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:18:49 by hyko              #+#    #+#             */
/*   Updated: 2022/11/29 16:44:27 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>

#define GRADE_MIN   150
#define GRADE_MAX   1

class Form
{
private:
    const std::string   _name;
    bool                _signed;
    int                 _signGrade;
    int                 _executeGrade;

public:
    Form(const std::string name, const int signGrade, const int executeGrade);
    Form(const Form& obj);
    ~Form(void);

    Form& operator=(From)

    class	GradeTooHighException : public std::exception {
        const char* what() const throw();
    };
    class   GradeTooLowException : public std::exception {
        const char* what() const throw();
    };

};

std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif
