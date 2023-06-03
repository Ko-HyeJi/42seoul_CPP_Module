/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:48:12 by hyko              #+#    #+#             */
/*   Updated: 2023/06/04 00:36:16 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
    try {
        if (argc < 2) {
            throw (WRONG_ARG_ERR);
        }
        PmergeMe pmergeme(--argc, ++argv);
        pmergeme.printUnsortedSequence();
        pmergeme.printSortedSequence();
        pmergeme.sortByVector();
        pmergeme.sortByDeque();
    }
    catch (const std::string err) {
		std::cout << RED << err << DEFAULT << std::endl;
	} 
    return 0;
}