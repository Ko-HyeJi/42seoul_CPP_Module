/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 02:35:57 by hyko              #+#    #+#             */
/*   Updated: 2022/12/05 03:53:46 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <exception>

Base* generate(void)
{
	int randValue = rand() % 3;
	switch (randValue)
	{
	case 0:
		std::cout << "A created" << std::endl;
		return (new A());
	case 1:
		std::cout << "B created" << std::endl;
		return (new B());
	case 2:
		std::cout << "C created" << std::endl;
		return (new C());
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
  	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(a);
	}
	catch (std::exception& e) {}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(b);
	}
	catch (std::exception& e) {}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(c);
	}
	catch (std::exception& e) {}	
}

int	main(void)
{
	Base *base;
	
	for (int i = 0; i < 10; i++) {
		base = generate();
		identify(base);
		identify(*base);
		delete base;
	}

	return (0);
}