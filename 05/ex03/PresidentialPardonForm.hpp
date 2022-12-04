/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:45 by hyko              #+#    #+#             */
/*   Updated: 2022/12/04 15:47:48 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"

// Required grades: sign 25, exec 5
class PresidentialPardonForm : public AForm
{
private:
	const std::string	_target;
	void				_pardon(void) const;
	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm& obj);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);

public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();

	const std::string	getTarget(void) const;

	void	execute(const Bureaucrat& executor) const;
};

#endif