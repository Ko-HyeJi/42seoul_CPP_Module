/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:36:33 by hyko              #+#    #+#             */
/*   Updated: 2022/12/07 11:06:13 by hyko             ###   ########.fr       */
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
		if (_size)
			delete[] _arr;
	}
	
	Array& operator=(const Array& other) {
		Array temp(other);
		this->swap(temp);
		return *this;
	}

	// Array& operator=(const Array& obj) {
	// 	if (this != &obj) {
	// 		if (_size)
	// 			delete[] _arr;
	// 		_size = obj.size();
	// 		if (_size) 
	// 			_arr = new T[_size];
	// 		for (unsigned int i = 0; i < _size; i++) {
	// 			_arr[i] = obj[i];
	// 		}
	// 	}
	// 	return (*this);
	// }

	T&	operator[](const unsigned int idx) {
		if (idx >= _size)
			throw (std::out_of_range("Index Out of range"));
		return _arr[idx];
	}
	
	T& operator[](const unsigned int idx) const {
		if (idx >= _size)
			throw (std::out_of_range("Index Out of range"));
		return _arr[idx];
	}

	unsigned int	size(void) const {
		return (_size);
	}

	// class InvalidIndexException : public std::exception {
	// public:
	// 	const char* what(void) const throw() {
	// 		return ("Exception: Invalid Index");
	// 	}
	// };
	
	void swap(Array& other) {
		T* temp_arr = other._arr;
		other._arr = this->_arr;
		this->_arr = temp_arr;
		
		unsigned int temp_size = other._size;
		other._size = this->_size;
		this->_size = temp_size;

		// std::swap(this->_arr, temp._arr);
		// std::swap(this->_size, temp._size);
	}

	void	printArray(void) {
		for (unsigned int i = 0; i < _size; i++)
			std::cout << _arr[i] << std::endl;
	}
};

#endif
