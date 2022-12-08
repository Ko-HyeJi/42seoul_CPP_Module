/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:35:39 by hyko              #+#    #+#             */
/*   Updated: 2022/12/09 02:09:38 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <set>


int main(void)
{
	/* vector */
	try
	{
		std::cout << "<vector>" << std::endl;
		std::vector<int> v;
		v.push_back(1);
		v.push_back(3);
		v.push_back(5);
		v.push_back(7);
		v.push_back(9);

		std::vector<int>::iterator first_iter = v.begin();
		std::vector<int>::iterator found_iter = easyfind(v, 5);
		
		int distance;
		for (distance = 0; first_iter != found_iter; first_iter++) {
			distance++;
		}
		std::cout << "distance: " << distance << " found_value: " << *found_iter << std::endl;
	
		const std::vector<int> c_v = v;
		std::cout << "<copied const vector>" << std::endl;
	
		std::vector<int>::const_iterator c_first_iter = c_v.begin();
		std::vector<int>::const_iterator c_found_iter = easyfind(c_v, 7);
		
		for (distance = 0; c_first_iter != c_found_iter; c_first_iter++) {
			distance++;
		}
		std::cout << "distance: " << distance << " found_value: " << *c_found_iter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	/* deque */	
	try
	{
		std::cout << "<deque>" << std::endl;
		std::deque<int> d;
		d.push_back(10);
		d.push_back(30);
		d.push_back(50);
		d.push_back(70);
		d.push_back(90);

		std::deque<int>::iterator first_iter = d.begin();
		std::deque<int>::iterator found_iter = easyfind(d, 10);
		
		int distance;
		for (distance = 0; first_iter != found_iter; first_iter++) {
			distance++;
		}
		std::cout << "distance: " << distance << " found_value: " << *found_iter << std::endl;
	
		const std::deque<int> c_d = d;
		std::cout << "<copied const deque>" << std::endl;
	
		std::deque<int>::const_iterator c_first_iter = c_d.begin();
		std::deque<int>::const_iterator c_found_iter = easyfind(c_d, 30);
		
		for (distance = 0; c_first_iter != c_found_iter; c_first_iter++) {
			distance++;
		}
		std::cout << "distance: " << distance << " found_value: " << *c_found_iter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	/* set */
	try
	{
		std::cout << "<set>" << std::endl;
		std::set<int> s;
		s.insert(100);
		s.insert(300);
		s.insert(500);
		s.insert(700);
		s.insert(900);

		std::set<int>::iterator first_iter = s.begin();
		std::set<int>::iterator found_iter = easyfind(s, 900);
		
		int distance;
		for (distance = 0; first_iter != found_iter; first_iter++) {
			distance++;
		}
		std::cout << "distance: " << distance << " found_value: " << *found_iter << std::endl;
	
		const std::set<int> c_s = s;
		std::cout << "<copied const set>" << std::endl;
	
		std::set<int>::const_iterator c_first_iter = c_s.begin();
		std::set<int>::const_iterator c_found_iter = easyfind(c_s, 700);
		
		for (distance = 0; c_first_iter != c_found_iter; c_first_iter++) {
			distance++;
		}
		std::cout << "distance: " << distance << " found_value: " << *c_found_iter << std::endl;
	
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
