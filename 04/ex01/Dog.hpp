/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:09 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 13:13:07 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	brain;
public:
	Dog(void);
	Dog(Brain& b_obj);
	~Dog(void);

	void	makeSound(void) const;

	Brain&	getBrain(void) const;
	void	setBrain(const Brain& brain);
};

#endif