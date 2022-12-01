/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:48 by hyko              #+#    #+#             */
/*   Updated: 2022/12/02 05:12:58 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include <cstdlib>
#include "AForm.hpp"

// Required grades: sign 72, exec 45
class RobotomyRequestForm : public AForm
{
private:
	const std::string	_target;
	void				_makeDrillingNoise(void) const;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm& obj);
	~RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);

	const std::string	getTarget(void) const;
	void				setTarget(const std::string target);

	void	execute(const Bureaucrat& executor) const;
};

#endif