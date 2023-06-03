#include <iostream>
#include <vector>
#include <algorithm>

// 두 개의 정렬된 배열을 병합하는 함수
std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right) {
    std::vector<int> result;
    int i = 0, j = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }

    // 왼쪽 배열에 남은 원소를 추가
    while (i < left.size()) {
        result.push_back(left[i]);
        i++;
    }

    // 오른쪽 배열에 남은 원소를 추가
    while (j < right.size()) {
        result.push_back(right[j]);
        j++;
    }

    return result;
}

// Merge Sort 함수
std::vector<int> mergeSort(const std::vector<int>& arr) {
    if (arr.size() <= 1)
        return arr;

    int mid = arr.size() / 2;

    // 배열을 반으로 나누기
    std::vector<int> left(arr.begin(), arr.begin() + mid);
    std::vector<int> right(arr.begin() + mid, arr.end());

    // 왼쪽 배열과 오른쪽 배열을 재귀적으로 정렬
    left = mergeSort(left);
    right = mergeSort(right);

    // 정렬된 배열 병합
    return merge(left, right);
}

// 주어진 조건에 따라 페어를 만들고 정렬하는 함수
std::vector<std::pair<int, int> > pairSort(const std::vector<int>& arr) {
    std::vector<std::pair<int, int> > pairs;

    // 전체 원소를 반으로 쪼개어 페어 생성
    for (int i = 0; i < arr.size(); i += 2) {
        if (i + 1 < arr.size()) {
            std::pair<int, int> pair;
            pair.first = std::max(arr[i], arr[i + 1]);
            pair.second = std::min(arr[i], arr[i + 1]);
            pairs.push_back(pair);
        } else {
            pairs.push_back(std::make_pair(arr[i], arr[i]));
        }
    }

    // 페어들을 정렬
    std::sort(pairs.rbegin(), pairs.rend());

    return pairs;
}

// 삽입 정렬 함수
void insertionSort(std::vector<int>& arr, int low, int high) {
    for (int i = low + 1; i <= high; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= low && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> numbers;
    numbers.push_back(9);
    numbers.push_back(3);
    numbers.push_back(7);
    numbers.push_back(1);
    numbers.push_back(5);
    numbers.push_back(8);
    numbers.push_back(2);
    numbers.push_back(6);
    numbers.push_back(4);

    if (numbers.size() % 2 == 1) {
        numbers.push_back(0);
    }

    std::vector<std::pair<int, int> > sortedPairs = pairSort(numbers);

    std::vector<int> large;
    std::vector<int> small;

    std::vector<std::pair<int, int> >::iterator iter;
    for(iter = sortedPairs.begin(); iter!= sortedPairs.end(); iter++)
    {
        large.push_back(iter->first);
        small.push_back(iter->second);
    }

    std::vector<int>::iterator it;
    for(it = small.begin(); it != small.end(); it++) {
        large.push_back(*it);
        // insertionSort(large, 0, large.size() - 1);
    }

    insertionSort(large, 0, large.size() - 1);

    if (large[0] == 0) {
        large.erase(large.begin());
    }

    std::vector<int>::iterator it2;
    for(it2 = large.begin(); it2 != large.end(); it2++) {
        std::cout << *it2 << std::endl;
    }

    return 0;
}
