/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:06 by hyko              #+#    #+#             */
/*   Updated: 2022/11/25 00:06:54 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	brain;

public:
	Cat(void);
	Cat(Brain& b_obj);
	~Cat(void);

	void	makeSound(void) const;
	
	Brain&	getBrain(void) const;
	void	setBrain(const Brain& brain);
};

#endif