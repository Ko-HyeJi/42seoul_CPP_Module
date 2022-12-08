/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:35:41 by hyko              #+#    #+#             */
/*   Updated: 2022/12/08 19:28:35 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template <typename T>
typename T::iterator	easyfind(T& container, int n)
{
	typename T::iterator iter = std::find(std::begin(container), std::end(container), n);
	if (iter == std::end(container))
		throw std::runtime_error(std::to_string(n) + std::string(" is not in container"));
	return iter;
}

#endif
