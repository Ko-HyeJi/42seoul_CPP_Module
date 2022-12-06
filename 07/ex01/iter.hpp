/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:46:30 by hyko              #+#    #+#             */
/*   Updated: 2022/12/07 05:13:09 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* arr, int length, void (*f)(T&))
{
	for (int i = 0; i < length; i++) {
		f(arr[i]);
	}
	std::cout << std::endl;
}

template <typename T>
void	printFunc(T& val)
{
	std::cout << val << " ";
}

#endif
