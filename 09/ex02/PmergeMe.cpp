/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:48:16 by hyko              #+#    #+#             */
/*   Updated: 2023/06/03 20:39:49 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int size, char** sequence): _size(size) {
    std::cout << BLUE << "called constructor" << DEFAULT << std::endl;
    validateSequence(sequence);
    _sequence = new int(_size);
    saveSequence(sequence);
}

PmergeMe::~PmergeMe() {
    std::cout << BLUE << "called destructor" << DEFAULT << std::endl;
    delete _sequence;
    _sequence = 0;
}

void PmergeMe::validateSequence(char** sequence) {
    //숫자인가?
    //양수인가?
    //숫자 범위는 int max 까지만?
    //중복 검사 -> 중복 가능? 불가능? -> 일단 생략(중복 가능!)
    for (int i = 0; i < _size; i++) {
        for (int j = 0; sequence[i][j]; j++) {
            if (j == 0 && sequence[i][j] == '+') {
                continue;
            }
            else if (sequence[i][j] < '0' || sequence[i][j] > '9') {
                throw (std::string("Error: Invalid Value"));
            }
            else if (j > 9) {
                throw (std::string("Error: Too Large Num"));    
            }
        }
        
        int num = atoi(sequence[i]);
        if (num < 0) {
            throw (std::string("Error: Too Large Num"));
        }
    }
}

void PmergeMe::saveSequence(char** sequence) {
    for (int i = 0; i < _size; i++) {
        _sequence[i] = atoi(sequence[i]);
    }
}

PmergeMe::PmergeMe(const PmergeMe& obj): _sequence(obj.getSequence()), _size(obj.getSize()) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
    _sequence = obj.getSequence();
    _size = obj.getSize();
    return *this;
}

int* PmergeMe::getSequence() const {
    int* copySequence = new int(_size);
    for (int i = 0; i < _size; i++) {
        copySequence[i] = _sequence[i];
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

void PmergeMe::sortByVector() {
    std::vector<int> vecSequence;
    for (int i = 0; i < _size; i++) {
        std::cout << _sequence[i];
        vecSequence.push_back(_sequence[i]);
        // vecSequence[i] = _sequence[i];
        std::cout << std::endl;
    }
    
    // std::vector<int>::iterator iter;
    // for(iter = vecSequence.begin(); iter!= vecSequence.end(); iter++)
    // {
    //     std::cout << *iter << " ";
    // }
    // std::cout << std::endl;
}

void PmergeMe::sortByDeque() const {
    std::deque<int> deqSequence;   
    for (int i = 0; i < _size; i++) {
        deqSequence.push_back(_sequence[i]);
    }   
}