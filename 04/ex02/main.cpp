/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:38:19 by hyko              #+#    #+#             */
/*   Updated: 2022/11/25 00:59:01 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
	/* 추상 클래스 */

	// Animal animal;
	Cat cat;
	Dog dog;

	Animal *animal = new Cat();
	animal->makeSound();

	return 0; 
}