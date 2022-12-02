/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:45 by hyko              #+#    #+#             */
/*   Updated: 2022/12/02 04:31:42 by hyko             ###   ########.fr       */
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
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm& obj);
	~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);

	const std::string	getTarget(void) const;
	void				setTarget(const std::string target);

	void	execute(const Bureaucrat& executor) const;
};

#endif