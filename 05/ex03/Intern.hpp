/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:07:19 by hyko              #+#    #+#             */
/*   Updated: 2022/12/02 10:50:32 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern(void);
    Intern(Intern& obj);
    ~Intern(void);
    Intern& operator=(Intern& obj);

    AForm* makeForm(std::string name, std::string target);

    class   NoMatchingTypeException : public std::exception {
        const char* what() const throw();
    };
};

#endif
