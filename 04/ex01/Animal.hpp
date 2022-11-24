/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:02 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 23:43:21 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "iostream"

class Animal
{
protected:
	std::string type;
public:
	Animal(void);
	Animal(const std::string name);
	Animal(const Animal& obj);
	virtual ~Animal(void);

	Animal&	operator=(const Animal& obj);

	std::string	getType(void) const;
	void		setType(std::string type);

	virtual void	makeSound(void) const;
};

#endif