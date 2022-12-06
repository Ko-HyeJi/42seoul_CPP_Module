/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:07:17 by hyko              #+#    #+#             */
/*   Updated: 2022/12/06 17:48:00 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << YELLOW << "Intern created" << WHITE << std::endl;
}

Intern::Intern(Intern &obj)
{
	*this = obj;
	std::cout << YELLOW << "Intern copied" << WHITE << std::endl;
}

Intern::~Intern(void)
{
	std::cout << YELLOW << "Intern destroyed" << WHITE << std::endl;	
}

Intern& Intern::operator=(Intern &obj)
{
	return (obj);
}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
    AForm *form;
    std::string types[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int i;
    for (i = 0; i < 3; i++) {
        if (formName == types[i]) {
            std::cout << "Intern creates <" << formName << ">" <<std::endl;
            break ;
        }
    }
    switch (i) {
        case 0 :
            form = new ShrubberyCreationForm(formTarget);
            break ;
        case 1 :
            form = new RobotomyRequestForm(formTarget);
            break ;
        case 2 :
            form = new PresidentialPardonForm(formTarget);
            break ;
        default :
            form = NULL;
            throw (NoMatchingTypeException());
    }
    return (form);
}

const char* Intern::NoMatchingTypeException::what() const throw()
{
	return ("[Exception] No Matching Type");3
}
