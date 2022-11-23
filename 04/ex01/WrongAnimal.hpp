/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 04:33:29 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 11:40:20 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& obj);
	~WrongAnimal(void);

	WrongAnimal&	operator=(const WrongAnimal& obj);

	std::string	getType(void) const;
	void		setType(std::string type);

	void	makeSound(void) const;
};

#endif