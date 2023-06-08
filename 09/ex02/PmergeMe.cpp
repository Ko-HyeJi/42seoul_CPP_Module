/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:48:16 by hyko              #+#    #+#             */
/*   Updated: 2023/06/09 02:32:15 by kohyeji          ###   ########.fr       */
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
            else if (sequence[i][j] < '0' || sequence[i][j] > '9') {
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

void PmergeMe::sortByVector() {
    clock_t start = clock();
    
    std::vector<int> vecSequence = _sequence;    

    if (vecSequence.size() % 2 == 1) {
        vecSequence.push_back(0);
    }

    std::vector<std::pair<int, int> > pairs = createPairsVector(vecSequence);

    std::vector<int> largeArr;
    std::vector<int> smallArr;

    std::vector<std::pair<int, int> >::iterator iter;
    for (iter = pairs.begin(); iter != pairs.end(); iter++) {
        if (iter->first >= iter->second) {
            largeArr.push_back(iter->first);
            smallArr.push_back(iter->second);
        }
        else {
            largeArr.push_back(iter->second);
            smallArr.push_back(iter->first);
        }
    }

    mergeSort(largeArr, 0, largeArr.size() - 1);

    std::vector<int>::iterator iter2;
    for (iter2 = smallArr.begin(); iter2 != smallArr.end(); iter2++) {
        binaryInsert(largeArr, *iter2);
    }

    if (largeArr[0] == 0) {
        largeArr.erase(largeArr.begin());
    }

    // //print sortedArr
    // std::cout << "vector : ";
    // std::vector<int>::iterator iter3;
    // for (iter3 = largeArr.begin(); iter3 != largeArr.end(); iter3++) {
    //     std::cout << *iter3 << " ";
    // }
    // std::cout << std::endl;
    
    clock_t end = clock();

    std::cout << std::fixed;
    std::cout.precision(5);
    std::cout << "Time to process a range of " << _size << " elements with std::vector : " << double(end - start) / CLOCKS_PER_SEC << " us" << std::endl;
} 

void PmergeMe::sortByDeque() {
    clock_t start = clock();
    
    std::deque<int> deqSequence;
    
    std::vector<const int>::iterator it;
    for(it = _sequence.begin(); it != _sequence.end(); it++)
    {   
        deqSequence.push_back(*it);
    }

        if (deqSequence.size() % 2 == 1) {
        deqSequence.push_back(0);
    }

    std::deque<std::pair<int, int> > pairs = createPairsDeque(deqSequence);

    std::deque<int> largeArr;
    std::deque<int> smallArr;

    std::deque<std::pair<int, int> >::iterator iter;
    for (iter = pairs.begin(); iter != pairs.end(); iter++) {
        if (iter->first >= iter->second) {
            largeArr.push_back(iter->first);
            smallArr.push_back(iter->second);
        }
        else {
            largeArr.push_back(iter->second);
            smallArr.push_back(iter->first);
        }
    }

    mergeSort(largeArr, 0, largeArr.size() - 1);

    std::deque<int>::iterator iter2;
    for (iter2 = smallArr.begin(); iter2 != smallArr.end(); iter2++) {
        binaryInsert(largeArr, *iter2);
    }

    if (largeArr[0] == 0) {
        largeArr.erase(largeArr.begin());
    }

    // //print sortedArr
    // std::cout << "deque : ";
    // std::deque<int>::iterator iter3;
    // for (iter3 = largeArr.begin(); iter3 != largeArr.end(); iter3++) {
    //     std::cout << *iter3 << " ";
    // }
    // std::cout << std::endl;
    
    clock_t end = clock();
    // std::cout << std::fixed;
    // std::cout.precision(5);
    std::cout << "Time to process a range of " << _size << " elements with std::deque : " << double(end - start) / CLOCKS_PER_SEC << " us" << std::endl;
}

std::vector<std::pair<int, int> > PmergeMe::createPairsVector(const std::vector<int>& nums) {
    std::vector<std::pair<int, int> > pairs;
    for (int i = 0; i < int(nums.size()); i += 2) {
        std::pair<int, int> newPair(nums[i], nums[i + 1]);
        pairs.push_back(newPair);
    }
    return pairs;
}

std::deque<std::pair<int, int> > PmergeMe::createPairsDeque(const std::deque<int>& nums) {
    std::deque<std::pair<int, int> > pairs;
    for (int i = 0; i < int(nums.size()); i += 2) {
        std::pair<int, int> newPair(nums[i], nums[i + 1]);
        pairs.push_back(newPair);
    }
    return pairs;
}
