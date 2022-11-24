/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:19 by hyko              #+#    #+#             */
/*   Updated: 2022/11/24 23:14:51 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
	std::cout << "==================================================\n" << std::endl;
	{
		/* subject */
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << j->getType() << " " << std::endl; 
		std::cout << i->getType() << " " << std::endl; 
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		
		delete meta;
		delete i;
		delete j;
	}
	std::cout << "\n==================================================\n" << std::endl;
	{
		/* WrongAnimal -> not using virtual keyword */
		const WrongAnimal* wAnimal = new WrongAnimal();
		const WrongAnimal* wCat = new WrongCat();
		
		std::cout << wCat->getType() << " " << std::endl; 
		wCat->makeSound();
		wAnimal->makeSound();
		
		delete wAnimal;
		delete wCat;
	}
	std::cout << "\n==================================================" << std::endl;
	return 0; 
}