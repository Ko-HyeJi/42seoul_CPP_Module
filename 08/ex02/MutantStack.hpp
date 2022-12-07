/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:57:09 by hyko              #+#    #+#             */
/*   Updated: 2022/12/07 19:19:09 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type  container_type;
    typedef typename container_type::value_type              value_type;
    typedef typename container_type::size_type               size_type;
    typedef typename container_type::reference               reference;
    typedef typename container_type::const_reference         const_reference;

    typedef typename container_type::iterator    iterator;
    typedef typename container_type::reverse_iterator reverse_iterator;
    typedef typename container_type::const_iterator const_iterator;
    typedef typename container_type::const_reverse_iterator const_reverse_iterator;

    MutantStack(): std::stack<T>() {}
    MutantStack(const MutantStack& other): std::stack<T>() {
        this->c = other.c;
    }
    MutantStack& operator=(const MutantStack& other) {
        this->c = other.c;
    }
    ~MutantStack() {};

    reference   top() {
        return this->c.back();
    }
    const_reference top() const {
        return this->c.back();
    }

    bool emptry() const {
        return this->c.empty();
    }

    size_type size() const {
        return this->c.size();
    }

    void push(const value_type& value) {
        this->c.push_back(value);
    }

    void pop() {
        this->c.pop_back();
    }

    iterator begin() {
        return this->c.begin();
    }
    const_iterator begin() const {
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
