/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:19 by hyko              #+#    #+#             */
/*   Updated: 2022/11/25 00:27:31 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
	std::cout << "==================================================\n" << std::endl;
	
	{
		/* subject */
		const Animal* j = new Dog(); 
		const Animal* i = new Cat();

		delete j;//should not create a leak 
		delete i;
	}

	std::cout << "\n==================================================\n" << std::endl;
	
	{
		/* 깊은 복사 확인 */
		Brain	*newBrain = new Brain(); std::cout << std::endl;
		for (int i = 0; i < 100; i++) {
			newBrain->setIdea(i, "idea");
		}
		
		Dog	*newDog = new Dog(*newBrain); std::cout << std::endl;
		delete newBrain; std::cout << std::endl;

		std::cout << "before Dog's Brain : " << newDog->getBrain().getIdea(0) << std::endl;
		newDog->getBrain().setIdea(0, "new_idea");
		std::cout << "after Dog's Brain : " << newDog->getBrain().getIdea(0) << std::endl;

		std::cout << std::endl;
		delete newDog;
	}
	
	std::cout << "\n==================================================\n" << std::endl;

	{
		/* Animal 배열 */
		int size = 10;
		Animal *arr[size];
		
		std::cout << "< CREATE >\n" << std::endl;
		for (int i = 0; i < size; i++) {
			if (i < (size / 2)) {
				std::cout << "( " << i << " )" << std::endl;
				arr[i] = new Dog; std::cout << "--------------------" << std::endl;
			}
			else {
				std::cout << "( " << i << " )" << std::endl;
				arr[i] = new Cat; std::cout << "--------------------" << std::endl;
			}
		}
		
		std::cout << "\n< DELETE >\n" << std::endl;
		for (int i = 0; i < size; i++) {
			std::cout << "( " << i << " )" << std::endl;
			delete arr[i]; std::cout << "--------------------" << std::endl;
		}
	}
	
	std::cout << "\n==================================================" << std::endl;

	return 0; 
}