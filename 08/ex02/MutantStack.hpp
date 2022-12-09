/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:57:09 by hyko              #+#    #+#             */
/*   Updated: 2022/12/09 16:01:05 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <exception>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	typedef std::stack<T>													parent_type;
    typedef typename parent_type::container_type::iterator					iterator;
    typedef typename parent_type::container_type::reverse_iterator			reverse_iterator;
    typedef typename parent_type::container_type::const_iterator			const_iterator;
    typedef typename parent_type::container_type::const_reverse_iterator	const_reverse_iterator;

    MutantStack() : parent_type() {}
	
    MutantStack(const MutantStack& other) : parent_type(other) {}

	MutantStack& operator=(const MutantStack& other) {
		this->parent_type::operator=(other);
		return (*this);
    }
	
    ~MutantStack() {}

    iterator begin() {
        return (this->c.begin());
    }
    const_iterator begin() const {
        return (this->c.begin());
    }

    reverse_iterator rbegin() {
        return (this->c.rbegin());
    }
    const_reverse_iterator rbegin() const {
        return (this->c.rbegin());
    }

    iterator end() {
        return (this->c.end());
    }
    const_iterator end() const {
        return (this->c.end());
    }

    reverse_iterator rend() {
        return (this->c.rend());
    }
    const_reverse_iterator rend() const {
        return this->c.rend();
    }
};

#endif
