/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:48:12 by hyko              #+#    #+#             */
/*   Updated: 2023/06/11 21:57:13 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
    try {
        std::cout << std::fixed;
        std::cout.precision(5);

        if (argc < 2) {
            throw ("Error");
        }
        PmergeMe pmergeme(--argc, ++argv);
        pmergeme.printUnsortedSequence();
        pmergeme.sortByVector();
        pmergeme.sortByDeque();
    }
    catch(const char* err) {
        std::cout << RED << err << DEFAULT << std::endl;
    } 
    return 0;
}