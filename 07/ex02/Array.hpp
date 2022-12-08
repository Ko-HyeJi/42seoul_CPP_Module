/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:36:33 by hyko              #+#    #+#             */
/*   Updated: 2022/12/08 16:47:49 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	T*				_arr;
	unsigned int	_size;

public:
	Array(void) : _size(0) {
		_arr = new T[_size];
	}
	
	Array(unsigned int n) : _arr(NULL), _size(n) {
		_arr = new T[_size];
	}
	
	Array(const Array& obj) : _size(obj.size()) {
		_arr = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_arr[i] = obj[i];
	}
	
	~Array(void) {
		delete[] _arr;
	}

	Array& operator=(const Array& obj) {
		if (this != &obj) {
			delete[] _arr;
			_size = obj.size();
			_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = obj[i];
		}
		return (*this);
	}

	T&	operator[](const unsigned int idx) {
		if (idx >= _size)
			throw (std::out_of_range("Index Out of range"));
		return _arr[idx];
	}
	
	const T& operator[](const unsigned int idx) const {
		if (idx >= _size)
			throw (std::out_of_range("Index Out of range"));
		return _arr[idx];
	}

	unsigned int	size(void) const {
		return (_size);
	}

	void	printArray(void) const {
		for (unsigned int i = 0; i < _size; i++)
			std::cout << _arr[i] << " ";
	}
};

#endif
