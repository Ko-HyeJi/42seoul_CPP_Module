/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:46:30 by hyko              #+#    #+#             */
/*   Updated: 2022/12/09 14:26:23 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* arr, unsigned int length, void (*f)(T&))
{
	for (unsigned int i = 0; i < length; i++) {
		f(arr[i]);
	}
}

template <typename T>
void iter(const T* arr, const unsigned int length, void (*f)(const T&))
{
	for (unsigned int i = 0; i < length; i++) {
		f(arr[i]);
	}
}

#endif
