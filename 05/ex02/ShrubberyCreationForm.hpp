/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:51 by hyko              #+#    #+#             */
/*   Updated: 2022/12/01 17:51:00 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include <fstream>
#include "AForm.hpp"


// Required grades: sign 145, exec 137
class ShrubberyCreationForm : public AForm
{
private:
	const std::string	_target;
	void				_writeTree(void) const;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm& obj);
	~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);

	const std::string	getTarget(void) const;

	void	execute(const Bureaucrat& executor) const;
};

#endif