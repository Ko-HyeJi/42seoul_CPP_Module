/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:36:33 by hyko              #+#    #+#             */
/*   Updated: 2022/12/07 04:33:11 by hyko             ###   ########.fr       */
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
	Array(void) : _arr(NULL), _size(0) {}
	Array(unsigned int n) : _arr(NULL), _size(n) {
		if (_size)
			_arr = new T[_size];
	}
	
	Array(const Array& obj) : _arr(NULL), _size(obj.size()) {
		if (_size)
			_arr = new T[_size];
		for (unsigned int i = 0 ; i < _size ; ++i)
			_arr[i] = obj[i];
  	}
	
	~Array(void) {
		if (_size) {
			delete[] _arr;
			_arr = NULL;
			_size = 0;
		}
	}
	
	Array& operator=(const Array& obj) {
		if (this != &obj) {
			if (_size) {
				delete[] _arr;
				_arr = NULL;
				_size = 0;
			}
			_size = obj.size();
			if (_size) 
				_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++) {
				_arr[i] = obj[i];
			}
		}
		return (*this);
	}

	T&	operator[](const unsigned int idx) {
		// std::cout << "operator [] called" << std::endl;
		if (idx >= _size)
			throw (InvalidIndexException());
		return _arr[idx];
	}
	T& operator[](const unsigned int idx) const {
		// std::cout << "const operator [] called" << std::endl;
		if (idx >= _size)
			throw (InvalidIndexException());
		return _arr[idx];
	}

	unsigned int	size(void) const {
		return (_size);
	}

	class InvalidIndexException : public std::exception {
	public:
		const char* what(void) const throw() {
			return ("Exception: Invalid Index");
		}
	};
	
	void	printArray(void) {
		for (unsigned int i = 0; i < _size; i++)
			std::cout << _arr[i] << std::endl;
	}
};

#endif
