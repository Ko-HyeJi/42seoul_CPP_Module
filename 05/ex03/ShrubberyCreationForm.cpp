/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:50 by hyko              #+#    #+#             */
/*   Updated: 2022/12/04 15:48:11 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << YELLOW << "ShrubberyCreationForm \"" << this->getTarget() << "\" created" << WHITE << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << YELLOW << "ShrubberyCreationForm \"" << this->getTarget() << "\" destroyed" << WHITE << std::endl;
}

const std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	executor.executeForm(*this);
	this->_writeTree();
}

void	ShrubberyCreationForm::_writeTree(void) const
{
	std::string	filename = getTarget() + "_shrubbery";
	std::ofstream outFile(filename);

	outFile << "\n"
	"           ,@@@@@@@,\n"
    "   ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
    ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
	",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
	"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
	"%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
	"`&%\\ ` /%&'    |.|        \\ '|8'\n"
	"	|o|        | |         | |\n"
	"	|.|        | |         | |\n"
    "\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";

	outFile.close();
	std::cout << PURPLE << "<" << getTarget() << "> writes trees successfully" << WHITE << std::endl;
}
