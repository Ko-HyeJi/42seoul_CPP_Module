/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:57:09 by hyko              #+#    #+#             */
/*   Updated: 2022/12/08 22:30:58 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	// typedef typename std::stack<T>::container_type  container_type;
    // typedef typename container_type::value_type              value_type;
    // typedef typename container_type::size_type               size_type;
    // typedef typename container_type::reference               reference;
    // typedef typename container_type::const_reference         const_reference;

    typedef typename std::stack<T>::container_type::iterator				iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
    typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

    MutantStack(): std::stack<T>() {}
	
    // MutantStack(const MutantStack& other): std::stack<T>() {
    //     this->c = other.c;
    // }
    MutantStack(const MutantStack& other): std::stack<T>(other.c) {}
    // MutantStack(const MutantStack& other): std::stack<T>(other) {}
    
	MutantStack& operator=(const MutantStack& other) {
        // this->c = other.c;
		if (this != &other)
			std::stack<T>::operator=(other);
		return (*this);
    }
	
    ~MutantStack() {};

    iterator begin() {
		std::cout << "begin() called" << std::endl;
        return this->c.begin();
    }
    const_iterator begin() const {
		std::cout << "const begin() called" << std::endl;
        return this->c.begin();
    }

    reverse_iterator rbegin() {
        return this->c.rbegin();
    }
    const_reverse_iterator rbegin() const {
        return this->c.rbegin();
    }

    iterator end() {
        return this->c.end();
    }
    const_iterator end() const {
        return this->c.end();
    }

    reverse_iterator rend() {
        return this->c.rend();
    }
    const_reverse_iterator rend() const {
        return this->c.rend();
    }
};

#endif
