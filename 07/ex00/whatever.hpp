/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:46:30 by hyko              #+#    #+#             */
/*   Updated: 2022/12/08 16:39:45 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T& min(T& a, T& b) {
	return (a < b ? a : b);
}

// template <typename T>
// const T& min(const T& a, const T& b) {
// 	return (a < b ? a : b);
// }

template <typename T>
T& max(T& a, T& b) {
	return (a > b ? a : b);
}

// template <typename T>
// const T& max(const T& a, const T& b) {
// 	return (a > b ? a : b);	
// }

#endif
