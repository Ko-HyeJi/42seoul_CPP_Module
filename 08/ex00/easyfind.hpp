/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:35:41 by hyko              #+#    #+#             */
/*   Updated: 2022/12/09 03:34:17 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>

template <typename T>
typename T::iterator	easyfind(T& container, const int n)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), n);
	if (iter == container.end())
		throw (std::runtime_error("no occurrence is found"));
	return (iter);
}

template <typename T>
typename T::const_iterator	easyfind(const T& container, const int n)
{
	typename T::const_iterator iter = std::find(container.begin(), container.end(), n);
	if (iter == container.end())
		throw (std::runtime_error("no occurrence is found"));
	return (iter);
}

#endif
