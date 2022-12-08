/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:46:30 by hyko              #+#    #+#             */
/*   Updated: 2022/12/08 16:43:57 by hyko             ###   ########.fr       */
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
}

template <typename T>
void iter(const T* arr, const int length, void (*f)(const T&))
{
	for (int i = 0; i < length; i++) {
		f(arr[i]);
	}
}

#endif
