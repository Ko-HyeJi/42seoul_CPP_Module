/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:48:20 by hyko              #+#    #+#             */
/*   Updated: 2023/06/10 13:33:37 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <time.h>
#include "color.hpp"

class PmergeMe
{
private:
    std::vector<int> _sequence;
    int _size;
    PmergeMe(void);
    void validateAndSaveSequence(char** sequence);

    std::vector<std::pair<int, int> > createPairsVector(const std::vector<int>& nums);
    std::deque<std::pair<int, int> > createPairsDeque(const std::deque<int>& nums);

    template <typename T>
    void merge(T& nums, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;
        int k = left;
        T temp(nums.size());

        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp[k] = nums[i];
                i++;
            } else {
                temp[k] = nums[j];
                j++;
            }
            k++;
        }

        while (i <= mid) {
            temp[k] = nums[i];
            i++;
            k++;
        }

        while (j <= right) {
            temp[k] = nums[j];
            j++;
            k++;
        }

        for (int index = left; index <= right; index++) {
            nums[index] = temp[index];
        }
    }

    template <typename T>
    void mergeSort(T& nums, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(nums, left, mid);
            mergeSort(nums, mid + 1, right);
            merge(nums, left, mid, right);
        }
    }

    template <typename T>
    void binaryInsert(T& sortedContainer, const typename T::value_type& element) {
        typename T::iterator low = sortedContainer.begin();
        typename T::iterator high = sortedContainer.end();

        while (low < high) {
            typename T::iterator mid = low + (high - low) / 2;

            if (element < *mid) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        sortedContainer.insert(low, element);
    }

    template <typename T>
    void printSortedArray(T& sortedArray) {
        typename T::iterator iter = sortedArray.begin();
        for (iter = sortedArray.begin(); iter != sortedArray.end(); iter++) {
            std::cout << *iter << " ";
        }
        std::cout << std::endl;        
    }

public:
    PmergeMe(int size, char** sequence);
    ~PmergeMe(void);
    PmergeMe(const PmergeMe& obj);
    PmergeMe& operator=(const PmergeMe& obj);

    std::vector<int> getSequence() const;
    int getSize() const;

    void printUnsortedSequence() const;
    void printSortedSequence() const;
    
    void sortByVector();
    void sortByDeque();
};

#endif