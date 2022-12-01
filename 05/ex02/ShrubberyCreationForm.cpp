/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:50 by hyko              #+#    #+#             */
/*   Updated: 2022/12/01 18:01:22 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm " << this->getName() << " created" << std::endl;
}

// ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& obj)
// {
// 	this* = obj;
// 	std::cout << "ShrubberyCreationForm " << this->getName() << " copied" << std::endl;
// }

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "destroyed" << std::endl;
}

// ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
// {
// 	if (this != obj) {
// 		return (*this);
// 	} //?????????????????????????
// }

const std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() <= this->getExecuteGrade()){
		this->_writeTree();
		executor.executeForm(*this);
	}
	else
		std::cout << "execute failed" << std::endl;
}

#include <fstream>

void	ShrubberyCreationForm::_writeTree(void) const
{
	std::string	filename = getTarget() + "_shrubbery";
	std::ofstream outFile(filename);

	outFile << 
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
}
