/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:48:16 by hyko              #+#    #+#             */
/*   Updated: 2023/06/04 05:16:16 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int size, char** sequence): _size(size) {
    std::cout << BLUE << "called constructor" << DEFAULT << std::endl;
    validateAndSaveSequence(sequence);
}

PmergeMe::~PmergeMe() {
    std::cout << BLUE << "called destructor" << DEFAULT << std::endl;
}

void PmergeMe::validateAndSaveSequence(char** sequence) {
    for (int i = 0; i < _size; i++) {
        for (int j = 0; sequence[i][j]; j++) {
            if (j == 0 && sequence[i][j] == '+') {
                continue;
            }
            else if (sequence[i][j] < '1' || sequence[i][j] > '9') {
                throw (std::string("Error: Invalid Value"));
            }
            else if (j > 9) {
                throw (std::string("Error: Too Large Num"));    
            }
        }

        if (sequence[i][0] == 0) {
            throw (std::string("Error - 1"));
        }
            
        int num = atoi(sequence[i]);
        if (num < 0) {
            throw (std::string("Error: Too Large Num"));
        }
        _sequence.push_back(num);
    }
}

PmergeMe::PmergeMe(const PmergeMe& obj): _sequence(obj.getSequence()), _size(obj.getSize()) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
    _sequence = obj.getSequence();
    _size = obj.getSize();
    return *this;
}

std::vector<int> PmergeMe::getSequence() const {
    std::vector<int> copySequence;
    for (int i = 0; i < _size; i++) {
        copySequence.push_back(_sequence[i]);
    }
    return copySequence;
}

int PmergeMe::getSize() const { return _size; }

void PmergeMe::printUnsortedSequence() const {
    std::cout << "Before: ";
    for (int i = 0; i < _size; i++) {
        std::cout << _sequence[i] << " ";
    }
    std::cout << std::endl;
}
    
void PmergeMe::printSortedSequence() const {
    int sortedSequence[_size];
    for (int i = 0; _sequence[i]; i++) {
        sortedSequence[i] = _sequence[i];
    }
    std::sort(sortedSequence, sortedSequence + _size);
    
    std::cout << "After: ";
    for (int i = 0; i < _size; i++) {
        std::cout << sortedSequence[i] << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::sortByVector() const {
    std::vector<int> vecSequence = _sequence;    
    std::vector<int>::iterator iter;
    for(iter = vecSequence.begin(); iter!= vecSequence.end(); iter++)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
} 

void PmergeMe::sortByDeque() const {
    std::deque<int> deqSequence;
    std::vector<const int>::iterator iter;
    for(iter = _sequence.begin(); iter != _sequence.end(); iter++)
    {   
        deqSequence.push_back(*iter);
    }

    // std::deque<int>::iterator iter2;
    // for(iter2 = deqSequence.begin(); iter2!= deqSequence.end(); iter2++)
    // {
    //     std::cout << *iter2 << " ";
    // }
    // std::cout << std::endl;
}


