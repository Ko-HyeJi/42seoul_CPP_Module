/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:35:39 by hyko              #+#    #+#             */
/*   Updated: 2022/12/07 06:43:22 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	try
	{
		std::vector<int> v;
		for (int i = 0; i < 10; i++) {
			v.push_back(i);
		}
		std::vector<int>::iterator iter = easyfind(v, 5);
		std::cout << "5 is at " << std::distance(std::begin(v), iter) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::list<int> l;
		for (int i = 0; i < 10; i++) {
			l.push_back(i);
		}
		std::list<int>::iterator iter = easyfind(l, 7);
		std::cout << "7 is at " << std::distance(std::begin(l), iter) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::deque<int> d;
		for (int i = 0; i < 10; i++) {
			d.push_back(i);
		}
		std::deque<int>::iterator iter = easyfind(d, 10);
		std::cout << "10 is at " << std::distance(std::begin(d), iter) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}
