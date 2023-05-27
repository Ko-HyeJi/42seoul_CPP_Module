/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:48:20 by hyko              #+#    #+#             */
/*   Updated: 2023/05/27 21:22:20 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include "color.hpp"
#include "error.hpp"

class PmergeMe
{
private:
    int* _sequence;
    int _size;
    PmergeMe(void);

public:
    PmergeMe(int size, char** sequence);
    ~PmergeMe(void);
    PmergeMe(const PmergeMe& obj);
    PmergeMe& operator=(const PmergeMe& obj);

    void validateSequence(char** sequence);
    void saveSequence(char** sequence);

    int* getSequence() const;
    int getSize() const;

    void printUnsortedSequence() const;
    void printSortedSequence() const;
    
    void sortByVector() const;
    void sortByDeque() const;
};

#endif