/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:48 by hyko              #+#    #+#             */
/*   Updated: 2022/12/04 15:47:51 by hyko             ###   ########.fr       */
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
	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm& obj);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
	
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();

	const std::string	getTarget(void) const;

	void	execute(const Bureaucrat& executor) const;
};

#endif